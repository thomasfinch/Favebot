#import <Foundation/Foundation.h>
#import "STTwitter/STTwitter.h"
#import "Headers/TweetbotHeaders/PTHTweetbotCursor.h"
#import "Credentials.h"

static STTwitterAPI *twitter;
static BOOL credentialsVerified = NO;

%hook PTHTweetbotStatus

-(BOOL)isFromCurrentUser 
{
	return YES;
}

%end

%hook PTHTweetbotCursor

-(void)sendRequest:(id)request type:(unsigned)type block:(id)requestBlock
{
	NSString *url = [MSHookIvar<NSURL*>(request, "_url") absoluteString];

	if ([url hasPrefix:@"https://push.tapbots.com/tweetbot/3/statuses/favorites/"])
	{
		NSString *tweetID = [url componentsSeparatedByString:@"/"][7];
		tweetID = [tweetID substringToIndex:[tweetID length]-5]; //get rid of ".json"
		NSString *requestURL = [NSString stringWithFormat:@"/1.1/statuses/%@/activity/summary.json",tweetID];

		if (!twitter)
			twitter = [STTwitterAPI twitterAPIWithOAuthConsumerKey:OAUTH_CONSUMER_KEY consumerSecret:OAUTH_CONSUMER_SECRET username:TWITTER_USERNAME password:TWITTER_PASSWORD];

		if (!credentialsVerified)
		{
			[twitter verifyCredentialsWithSuccessBlock:^(NSString *username) {
	        credentialsVerified = YES;
	       	
	        [twitter getResource:requestURL baseURLString:@"https://api.twitter.com" parameters:nil downloadProgressBlock:nil successBlock:^(NSDictionary *rateLimits, id json) {

		            [self handleResponse:[json objectForKey:@"favoriters"] type:(int)type block:nil];

		        } errorBlock:^(NSError *error) {
		            NSLog(@"Failed with error: %@",error);
		        }];

		    } errorBlock:^(NSError *error) {
		        credentialsVerified = NO;
		    }];
		}
		else
		{
			[twitter getResource:requestURL baseURLString:@"https://api.twitter.com" parameters:nil downloadProgressBlock:nil successBlock:^(NSDictionary *rateLimits, id json) {

		            [self handleResponse:[json objectForKey:@"favoriters"] type:(int)type block:nil];

		        } errorBlock:^(NSError *error) {
		            NSLog(@"Failed with error: %@",error);
		        }];
		}
	}
	else
		%orig;
}

%end
