/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <UIKit/UIView.h>
#import "wotblitz-Structs.h"
#import "FBAdBlurredImageViewDelegate.h"
#import "FBAdVideoViewDelegate.h"

@class FBAdVideoView, FBNativeAd, FBAdBlurredImageView, NSString;
@protocol FBMediaViewDelegate;

@interface FBMediaView : UIView <FBAdBlurredImageViewDelegate, FBAdVideoViewDelegate> {
	BOOL _autoplayEnabled;
	BOOL _videoFailedToLoad;
	BOOL _needsDelayedLoad;
	id<FBMediaViewDelegate> _delegate;
	FBNativeAd* _nativeAd;
	FBAdBlurredImageView* _imageView;
	FBAdVideoView* _videoView;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) BOOL needsDelayedLoad;
@property(assign, nonatomic) BOOL videoFailedToLoad;
@property(assign, nonatomic) __weak FBAdVideoView* videoView;
@property(assign, nonatomic) __weak FBAdBlurredImageView* imageView;
@property(assign, nonatomic, getter=isAutoplayEnabled) BOOL autoplayEnabled;
@property(retain, nonatomic) FBNativeAd* nativeAd;
@property(assign, nonatomic) __weak id<FBMediaViewDelegate> delegate;
-(void).cxx_destruct;
-(void)videoViewDidTapCallToAction:(id)videoView withButton:(id)button withEvent:(id)event;
-(id)videoViewCallToActionText:(id)actionText;
-(void)videoViewTapped:(id)tapped;
-(void)videoViewDidLoad:(id)videoView;
-(void)blurredImageViewDidLoad:(id)blurredImageView;
-(void)setBounds:(CGRect)bounds;
-(void)setFrame:(CGRect)frame;
-(void)loadVideo;
-(void)loadImage;
-(void)loadNativeAd:(id)ad;
-(BOOL)autoplayEnabled;
-(BOOL)isValidFrame;
-(BOOL)videoSupported;
-(void)setupView;
-(id)initWithNativeAd:(id)nativeAd;
-(id)initWithCoder:(id)coder;
-(id)init;
@end
