//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CBAnimationDidStopDelegate : NSObject
{
    CDUnknownBlockType _callback;
}

+ (id)animationDidStopDelegateWithCallback:(CDUnknownBlockType)arg1;
@property(copy) CDUnknownBlockType callback; // @synthesize callback=_callback;
- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;

@end

