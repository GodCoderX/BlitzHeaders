//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSOperationQueue;

@interface TuneSkyhookCenter : NSObject
{
    NSMutableDictionary *_hooks;
    NSOperationQueue *_skyhookQueue;
}

+ (id)defaultCenter;
- (void).cxx_destruct;
- (void)applicationStatusBarChanged:(id)arg1;
- (void)deviceOrientationDidChange:(id)arg1;
- (void)applicationLowMemory:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationWillTerminate:(id)arg1;
- (void)applicationDidFinishLaunching:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (id)debugHook:(id)arg1;
- (_Bool)hasObserverForHook:(id)arg1;
- (void)postSkyhook:(id)arg1 object:(id)arg2 userInfo:(id)arg3 returnedObjectBlock:(CDUnknownBlockType)arg4;
- (void)postSkyhook:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
- (void)postSkyhook:(id)arg1 object:(id)arg2;
- (void)postSkyhook:(id)arg1;
- (void)removeSkyhookObserver:(id)arg1 name:(id)arg2;
- (void)removeObserver:(id)arg1;
- (void)removeObserver:(id)arg1 name:(id)arg2 object:(id)arg3;
- (void)addObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4;
- (void)addObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4 priority:(int)arg5;
- (void)postSkyhookOperation:(id)arg1;
- (void)postQueuedSkyhook:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
- (void)postQueuedSkyhook:(id)arg1 object:(id)arg2;
- (void)postQueuedSkyhook:(id)arg1;
- (void)waitTilQueueFinishes;
- (void)startSkyhookQueue;
- (void)stopAndClearSkyhookQueue;
- (void)stopSkyhookQueue;
- (void)initSkyhookQueue;
- (void)clearSkyhookQueue;
- (void)handleSessionEnd;
- (void)handleSessionStart;
- (void)dealloc;
- (id)init;

@end
