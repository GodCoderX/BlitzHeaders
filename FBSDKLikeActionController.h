/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>
#import "NSSecureCoding.h"
#import "FBSDKLikeDialogDelegate.h"
#import "NSDiscardableContent.h"

@class NSDate, NSString, NSMapTable, FBSDKAccessToken;

@interface FBSDKLikeActionController : NSObject <FBSDKLikeDialogDelegate, NSDiscardableContent, NSSecureCoding> {
	FBSDKAccessToken* _accessToken;
	unsigned _contentAccessCount;
	BOOL _contentDiscarded;
	NSMapTable* _dialogToAnalyticsParametersMap;
	NSMapTable* _dialogToUpdateBlockMap;
	NSString* _likeCountStringWithLike;
	NSString* _likeCountStringWithoutLike;
	BOOL _objectIsLikedIsPending;
	BOOL _objectIsLikedOnServer;
	BOOL _objectIsPage;
	unsigned _refreshState;
	NSString* _socialSentenceWithLike;
	NSString* _socialSentenceWithoutLike;
	NSString* _unlikeToken;
	NSString* _verifiedObjectID;
	BOOL _objectIsLiked;
	NSDate* _lastUpdateTime;
	NSString* _objectID;
	unsigned _objectType;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(readonly, copy, nonatomic) NSString* socialSentence;
@property(readonly, assign, nonatomic) BOOL objectIsLiked;
@property(readonly, assign, nonatomic) unsigned objectType;
@property(readonly, copy, nonatomic) NSString* objectID;
@property(readonly, copy, nonatomic) NSString* likeCountString;
@property(readonly, copy, nonatomic) NSDate* lastUpdateTime;
+(BOOL)supportsSecureCoding;
+(id)likeActionControllerForObjectID:(id)objectID objectType:(unsigned)type;
+(id)_cacheFileURL;
+(void)_applicationWillResignActiveNotification:(id)_application;
+(void)_accessTokenDidChangeNotification:(id)_accessToken;
+(void)initialize;
+(BOOL)isDisabled;
-(void).cxx_destruct;
-(BOOL)_useOGLike;
-(void)_updateWithObjectIsLiked:(int)objectIsLiked likeCountStringWithLike:(id)like likeCountStringWithoutLike:(id)like3 socialSentenceWithLike:(id)like4 socialSentenceWithoutLike:(id)like5 unlikeToken:(id)token soundEnabled:(BOOL)enabled animated:(BOOL)animated deferred:(BOOL)deferred;
-(void)_setExecuting:(BOOL)executing forKey:(id)key;
-(void)_refreshWithMode:(unsigned)mode;
-(void)_publishUnlikeWithUpdateBlock:(id)updateBlock analyticsParameters:(id)parameters fromViewController:(id)viewController;
-(void)_publishLikeWithUpdateBlock:(id)updateBlock analyticsParameters:(id)parameters fromViewController:(id)viewController;
-(void)_publishIfNeededWithUpdateBlock:(id)updateBlock analyticsParameters:(id)parameters fromViewController:(id)viewController;
-(void)_presentLikeDialogWithUpdateBlock:(id)updateBlock analyticsParameters:(id)parameters fromViewController:(id)viewController;
-(void)_ensureVerifiedObjectID:(id)anId;
-(void)_configure;
-(void)likeDialog:(id)dialog didFailWithError:(id)error;
-(void)likeDialog:(id)dialog didCompleteWithResults:(id)results;
-(BOOL)isContentDiscarded;
-(void)discardContentIfPossible;
-(void)endContentAccess;
-(BOOL)beginContentAccess;
-(void)toggleLikeWithSoundEnabled:(BOOL)soundEnabled analyticsParameters:(id)parameters fromViewController:(id)viewController;
-(void)refresh;
-(void)encodeWithCoder:(id)coder;
-(id)initWithCoder:(id)coder;
-(id)init;
-(id)initWithObjectID:(id)objectID objectType:(unsigned)type accessToken:(id)token;
@end

