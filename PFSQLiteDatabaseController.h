//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PFAsyncTaskQueue, PFFileManager;

@interface PFSQLiteDatabaseController : NSObject
{
    PFAsyncTaskQueue *_openDatabaseQueue;
    PFFileManager *_fileManager;
}

+ (id)controllerWithFileManager:(id)arg1;
@property(readonly, nonatomic) PFFileManager *fileManager; // @synthesize fileManager=_fileManager;
- (void).cxx_destruct;
- (id)openDatabaseWithNameAsync:(id)arg1;
- (id)initWithFileManager:(id)arg1;
- (id)init;

@end

