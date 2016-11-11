/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "FBSDKAccessTokenCaching.h"
#import </libobjc.A.h>

@class NSString;

@interface FBSDKAccessTokenCacheV3 : NSObject <FBSDKAccessTokenCaching> {
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
+(id)accessTokenForV3Dictionary:(id)v3Dictionary;
-(void)cacheAccessToken:(id)token;
-(void)clearCache;
-(id)fetchAccessToken;
@end

