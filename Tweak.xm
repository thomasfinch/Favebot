#import <Foundation/Foundation.h>
#import "substrate.h"
#import "STTwitter/STTwitter.h"
#import "SSKeychain/SSKeychain.h"
#import "Headers/TweetbotHeaders/PTHTweetbotCursor.h"
#import "Credentials.h"

NSMutableDictionary *twitterAPIs;
static NSString *currentAccount;
static NSString *tweetID;

BOOL keychainInfoForAccount(NSString *account)
{
	for (NSDictionary *acc in [SSKeychain accountsForService:@"com.thomasfinch.favebot"])
		if ([[acc objectForKey:@"acct"] isEqualToString:account])
			return YES;
	return NO;
}

%ctor
{
	twitterAPIs = [[NSMutableDictionary alloc] init];
}

%hook PTHTweetbotAccountController

-(id)initWithAccount:(id)account
{
	currentAccount = MSHookIvar<NSString*>(account, "_username");
	return %orig;
}

%end

%hook PTHTweetbotStatus

-(BOOL)isFromCurrentUser { return YES; }

%end

%hook PTHTweetbotCursor

-(void)sendRequest:(id)request type:(unsigned)type block:(id)requestBlock
{
	NSString *url = [MSHookIvar<NSURL*>(request, "_url") absoluteString];

	if ([url hasPrefix:@"https://push.tapbots.com/tweetbot/3/statuses/favorites/"])
	{
		tweetID = [url componentsSeparatedByString:@"/"][7];
		tweetID = [tweetID substringToIndex:[tweetID length]-5];
		
		if (!keychainInfoForAccount(currentAccount)) //if no info for account
		{
			UIAlertView *loginAlert = [[UIAlertView alloc] initWithTitle:@"Favbot Login" message:@"Please log in to your Twitter account." delegate:self cancelButtonTitle:@"Cancel" otherButtonTitles:@"Log In",nil];
			loginAlert.alertViewStyle = UIAlertViewStyleLoginAndPasswordInput;
			[loginAlert textFieldAtIndex:0].text = currentAccount;
			[loginAlert show];
		}
		else
		{
			if (![twitterAPIs objectForKey:currentAccount]) //if current user is not logged in
				[self loginToAccount:currentAccount withPassword:[SSKeychain passwordForService:@"com.thomasfinch.favebot" account:currentAccount]];
			else
				[self getFavorites];
		}
	}
	else
		%orig;
}

%new
- (void)alertView:(UIAlertView *)alertView clickedButtonAtIndex:(NSInteger)buttonIndex
{
	if (buttonIndex == 1) //If log in button clicked
		[self loginToAccount:currentAccount withPassword:[alertView textFieldAtIndex:1].text];
}

%new
- (void)loginToAccount:(NSString*)account withPassword:(NSString*)password
{
	STTwitterAPI *twitter = [STTwitterAPI twitterAPIWithOAuthConsumerKey:OAUTH_CONSUMER_KEY consumerSecret:OAUTH_CONSUMER_SECRET username:account password:password];

	[twitter verifyCredentialsWithSuccessBlock:^(NSString *username) {

    	[twitterAPIs setObject:twitter forKey:currentAccount];
    	[SSKeychain setPassword:password forService:@"com.thomasfinch.favebot" account:account];
    	[self getFavorites];

    } errorBlock:^(NSError *error) {
    	NSLog(@"LOGIN FAILED WITH ERROR: %@",error);

    	UIAlertView *loginAlert = [[UIAlertView alloc] initWithTitle:@"Favbot Login" message:@"Login failed, please double check your password." delegate:self cancelButtonTitle:@"Cancel" otherButtonTitles:@"Log In",nil];
		loginAlert.alertViewStyle = UIAlertViewStyleLoginAndPasswordInput;
		[loginAlert textFieldAtIndex:0].text = currentAccount;
		[loginAlert show];
    }];
}

%new
- (void)getFavorites
{
	NSString *requestURL = [NSString stringWithFormat:@"/1.1/statuses/%@/activity/summary.json",tweetID];
	[[twitterAPIs objectForKey:currentAccount] getResource:requestURL baseURLString:@"https://api.twitter.com" parameters:nil downloadProgressBlock:nil successBlock:^(NSDictionary *rateLimits, id json) {

        [self handleResponse:[json objectForKey:@"favoriters"] type:1 block:nil];

    } errorBlock:^(NSError *error) {
        NSLog(@"Failed with error: %@",error);
    }];
}

%end
