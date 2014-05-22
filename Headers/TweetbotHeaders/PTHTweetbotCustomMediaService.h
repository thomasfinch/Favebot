/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "PTHTweetbotOAuthMediaService.h"


@interface PTHTweetbotCustomMediaService : PTHTweetbotOAuthMediaService {
}
+(BOOL)verifyWithAccount:(id)account;
+(id)title;
+(BOOL)canUploadMovies;
+(BOOL)canUploadImages;
+(id)customHelpURL;
-(id)urlStringFromResponse:(id)response;
-(id)uploadPostDictionary;
-(id)uploadMessageKey;
-(id)uploadMediaKey;
-(id)uploadURL;
-(unsigned)uploadResponseType;
@end

