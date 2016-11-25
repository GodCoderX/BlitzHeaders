//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PFEventuallyQueue.h"

#import "PFEventuallyQueueSubclass.h"

@class NSString;

@interface PFCommandCache : PFEventuallyQueue <PFEventuallyQueueSubclass>
{
    unsigned int _fileCounter;
    NSString *_diskCachePath;
    unsigned long long _diskCacheSize;
}

+ (id)newDefaultCommandCacheWithCommandRunner:(id)arg1 cacheFolderPath:(id)arg2;
@property(nonatomic) unsigned long long diskCacheSize; // @synthesize diskCacheSize=_diskCacheSize;
@property(readonly, copy, nonatomic) NSString *diskCachePath; // @synthesize diskCachePath=_diskCachePath;
- (void).cxx_destruct;
- (void)_createDiskCachePathIfNeeded;
- (id)_filePathForCommandWithIdentifier:(id)arg1;
- (id)_removeFileForCommandWithIdentifier:(id)arg1;
- (id)_saveCommandToCacheInBackground:(id)arg1 object:(id)arg2 identifier:(id)arg3;
- (void)_setDiskCacheSize:(unsigned long long)arg1;
- (id)_cleanupDiskCacheWithRequiredFreeSize:(unsigned long long)arg1;
- (id)_waitForOperationSet:(id)arg1 eventuallyPin:(id)arg2;
- (id)_didFinishRunningCommand:(id)arg1 withIdentifier:(id)arg2 resultTask:(id)arg3;
- (id)_enqueueCommandInBackground:(id)arg1 object:(id)arg2 identifier:(id)arg3;
- (id)_commandWithIdentifier:(id)arg1 error:(id *)arg2;
- (id)_pendingCommandIdentifiers;
- (id)_newIdentifierForCommand:(id)arg1;
- (void)_simulateReboot;
- (void)removeAllCommands;
- (id)initWithCommandRunner:(id)arg1 maxAttemptsCount:(unsigned long long)arg2 retryInterval:(double)arg3 diskCachePath:(id)arg4 diskCacheSize:(unsigned long long)arg5;
- (id)initWithCommandRunner:(id)arg1 maxAttemptsCount:(unsigned long long)arg2 retryInterval:(double)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

