/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "PTHTweetbotOAuthMediaService.h"

@class NSRegularExpression;

@interface PTHTweetbotTwitPicMediaService : PTHTweetbotOAuthMediaService {
	NSRegularExpression* _expression;
}
+(id)title;
+(BOOL)canUploadImages;
-(void).cxx_destruct;
-(id)urlStringFromResponseDictionary:(id)responseDictionary;
-(id)uploadPostDictionary;
-(id)uploadMessageKey;
-(id)uploadMediaKey;
-(id)uploadURL;
@end
