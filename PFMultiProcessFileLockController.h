//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface PFMultiProcessFileLockController : NSObject
{
    NSObject<OS_dispatch_queue> *_synchronizationQueue;
    NSMutableDictionary *_locksDictionary;
    NSMutableDictionary *_contentAccessDictionary;
}

+ (id)sharedController;
- (void).cxx_destruct;
- (unsigned long long)lockedContentAccessCountForFileAtPath:(id)arg1;
- (void)endLockedContentAccessForFileAtPath:(id)arg1;
- (void)beginLockedContentAccessForFileAtPath:(id)arg1;
- (id)init;

@end

