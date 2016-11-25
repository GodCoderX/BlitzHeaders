//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSTimer;

@interface RenderView : UIView
{
    _Bool animating;
    _Bool displayLinkSupported;
    long long animationFrameInterval;
    id displayLink;
    NSTimer *animationTimer;
    _Bool isLoading;
    _Bool isLoaded;
    int currFPS;
    _Bool blockDrawView;
    _Bool limitKeyboardFps;
}

@property(readonly, nonatomic, getter=isAnimating) _Bool animating; // @synthesize animating;
- (void)keyboardDidFrameChanged:(id)arg1;
- (void)unblockDrawing;
- (void)blockDrawing;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)process:(int)arg1 touch:(id)arg2 withEvent:(id)arg3;
- (void)stopAnimation;
- (void)startAnimation;
@property(nonatomic) long long animationFrameInterval; // @dynamic animationFrameInterval;
- (void)drawView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

