//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface TuneMessageOrientationState : NSObject
{
    long long _lastOrientation;
    NSArray *_orientations;
}

+ (_Bool)currentOrientationIsSupportedByApp;
+ (id)calculateAngleToRotateViewFromPortrait;
+ (id)calculateAngleToRotateView;
+ (long long)getCurrentOrientation;
+ (struct CGSize)getCalculatedWindowSizeForCurrentOrientation;
+ (void)startTrackingOrientation;
+ (id)sharedState;
- (void).cxx_destruct;
- (_Bool)_currentOrientationIsSupportedByApp;
- (int)findIndexOfOrientation:(long long)arg1;
- (id)_calculateAngleToRotateView;
- (id)_calculateAngleToRotateViewFromPortrait;
- (void)buildOrientationsArray;
- (void)initOrientation;
- (struct CGSize)_getCalculatedWindowSizeForCurrentOrientation;

@end

