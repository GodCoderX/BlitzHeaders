/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "wotblitz-Structs.h"
#import </libobjc.A.h>

@class FBNativeAdDataModel, UIView;
@protocol FBDisplayAdAdapterDelegate;

@interface FBDisplayAdAdapter : NSObject {
	UIView* _adView;
	FBNativeAdDataModel* _nativeAdData;
	id<FBDisplayAdAdapterDelegate> _delegate;
}
@property(assign, nonatomic) __weak id<FBDisplayAdAdapterDelegate> delegate;
@property(retain, nonatomic) FBNativeAdDataModel* nativeAdData;
@property(retain, nonatomic) UIView* adView;
-(void).cxx_destruct;
-(void)forwardInvocation:(id)invocation;
-(id)methodSignatureForSelector:(SEL)selector;
-(void)onVideoTimeWithExtraData:(id)extraData;
-(void)onVideoPlayWithExtraData:(id)extraData;
-(void)onClickForViewController:(id)viewController withExtraData:(id)extraData;
-(void)onImpressionWithExtraData:(id)extraData withPostData:(id)postData;
-(void)unregisterView;
-(void)registerViewForInteraction:(id)interaction withViewController:(id)viewController;
-(BOOL)startAdFromRootViewController:(id)rootViewController;
-(void)loadAdData:(id)data forSize:(FBAdSize)size forOrientation:(int)orientation forPlacement:(id)placement minViewability:(int)viewability;
-(id)initWithDelegate:(id)delegate;
@end

