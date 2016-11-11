/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "FBAdContentContainer.h"
#import "wotblitz-Structs.h"
#import "FBNativeAdDelegate.h"

@class FBNativeAd, FBNativeAdDataModel, NSString, UIViewController;

@interface FBAdNativeContentContainer : FBAdContentContainer <FBNativeAdDelegate> {
	BOOL _viewInitialized;
	FBNativeAd* _nativeAd;
	CGSize _minimumSize;
	CGSize _maximumSize;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic, getter=isViewInitialized) BOOL viewInitialized;
@property(retain, nonatomic) FBNativeAdDataModel* offsiteAd;
@property(retain, nonatomic) FBNativeAd* nativeAd;
@property(readonly, assign, nonatomic) UIViewController* viewController;
-(void)setMaximumSize:(CGSize)size;
-(CGSize)maximumSize;
-(void)setMinimumSize:(CGSize)size;
-(CGSize)minimumSize;
-(void).cxx_destruct;
-(void)nativeAdDidFinishHandlingClick:(id)nativeAd;
-(void)nativeAdDidClick:(id)nativeAd;
-(BOOL)logClickWithExtraData:(id)extraData;
-(BOOL)logImpression;
-(BOOL)loadAdData:(id)data minViewability:(int)viewability;
-(void)dealloc;
-(id)initWithAdView:(id)adView actualAdSize:(CGSize)size adSizeType:(FBAdSize)type;
-(id)dataModel;
@end

