//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBAdContentContainer.h"

#import "FBNativeAdDelegate.h"

@class FBNativeAd, FBNativeAdDataModel, NSString, UIViewController;

@interface FBAdNativeContentContainer : FBAdContentContainer <FBNativeAdDelegate>
{
    _Bool _viewInitialized;
    FBNativeAd *_nativeAd;
    struct CGSize _minimumSize;
    struct CGSize _maximumSize;
}

@property(nonatomic, getter=isViewInitialized) _Bool viewInitialized; // @synthesize viewInitialized=_viewInitialized;
@property(retain, nonatomic) FBNativeAd *nativeAd; // @synthesize nativeAd=_nativeAd;
- (void)setMaximumSize:(struct CGSize)arg1;
- (struct CGSize)maximumSize;
- (void)setMinimumSize:(struct CGSize)arg1;
- (struct CGSize)minimumSize;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIViewController *viewController;
- (void)nativeAdDidFinishHandlingClick:(id)arg1;
- (void)nativeAdDidClick:(id)arg1;
- (_Bool)logClickWithExtraData:(id)arg1;
- (_Bool)logImpression;
- (_Bool)loadAdData:(id)arg1 minViewability:(int)arg2;
- (void)dealloc;
- (id)initWithAdView:(id)arg1 actualAdSize:(struct CGSize)arg2 adSizeType:(struct FBAdSize)arg3;
- (id)dataModel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) FBNativeAdDataModel *offsiteAd; // @dynamic offsiteAd;
@property(readonly) Class superclass;

@end

