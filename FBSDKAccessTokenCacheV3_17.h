/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>
#import "FBSDKAccessTokenCaching.h"

@class NSString, FBSDKKeychainStoreViaBundleID;

@interface FBSDKAccessTokenCacheV3_17 : NSObject <FBSDKAccessTokenCaching> {
	FBSDKKeychainStoreViaBundleID* _keychainStore;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(void)cacheAccessToken:(id)token;
-(void)clearCache;
-(id)fetchAccessToken;
-(id)init;
@end

