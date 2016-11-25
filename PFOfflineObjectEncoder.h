//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PFEncoder.h"

@class NSMutableArray, NSObject, PFOfflineStore, PFSQLiteDatabase;

@interface PFOfflineObjectEncoder : PFEncoder
{
    PFOfflineStore *_store;
    PFSQLiteDatabase *_database;
    NSMutableArray *_tasks;
    NSObject *_tasksLock;
}

+ (id)objectEncoderWithOfflineStore:(id)arg1 database:(id)arg2;
+ (id)objectEncoder;
@property(retain, nonatomic) NSObject *tasksLock; // @synthesize tasksLock=_tasksLock;
@property(retain, nonatomic) NSMutableArray *tasks; // @synthesize tasks=_tasks;
@property(nonatomic) PFSQLiteDatabase *database; // @synthesize database=_database;
@property(nonatomic) PFOfflineStore *store; // @synthesize store=_store;
- (void).cxx_destruct;
- (id)encodeFinished;
- (id)encodeParseObject:(id)arg1;

@end

