/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "PTHTweetbotOAuthMediaService.h"

@class NSRegularExpression;

@interface PTHTweetbotImageshackMediaService : PTHTweetbotOAuthMediaService {
	NSRegularExpression* _expression;
}
+(id)title;
+(BOOL)canUploadMovies;
+(BOOL)canUploadImages;
-(void).cxx_destruct;
-(id)urlStringFromResponseDictionary:(id)responseDictionary;
-(id)uploadPostDictionary;
-(id)uploadMessageKey;
-(id)uploadMediaKey;
-(id)movieUploadURL;
-(id)imageUploadURL;
@end
