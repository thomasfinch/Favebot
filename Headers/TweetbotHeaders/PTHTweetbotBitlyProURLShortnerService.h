/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "PTHTweetbotURLShortnerService.h"


@interface PTHTweetbotBitlyProURLShortnerService : PTHTweetbotURLShortnerService {
}
+(void)authenticate:(id)authenticate completion:(id)completion;
+(BOOL)needsAuthentication;
+(id)title;
-(void)shortenURL:(id)url completion:(id)completion;
-(id)queryDictionaryWithLongURL:(id)longURL;
-(id)init;
@end
