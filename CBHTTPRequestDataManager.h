//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSManagedObjectContext, NSManagedObjectModel, NSPersistentStoreCoordinator;

@interface CBHTTPRequestDataManager : NSObject
{
    NSManagedObjectModel *_managedObjectModel;
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
    NSManagedObjectContext *_managedObjectContext;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)shared;
@property(retain, nonatomic) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
@property(retain, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator; // @synthesize persistentStoreCoordinator=_persistentStoreCoordinator;
@property(retain, nonatomic) NSManagedObjectModel *managedObjectModel; // @synthesize managedObjectModel=_managedObjectModel;
- (void).cxx_destruct;
- (void)createManagedObjectContext;
- (id)nameForIncompatibleStore;
- (id)applicationIncompatibleStoresDirectory;
- (id)applicationStoresDirectory;
- (void)createPersistenceStore;
- (void)createManagedObjectModel;
- (id)applicationDocumentsDirectory;
- (id)allRequestsWithPath:(id)arg1;
- (id)allRequestsWithPath:(id)arg1 inOperationQueue:(_Bool)arg2;
- (void)removeRequestEntityWithUniqueId:(id)arg1;
- (void)updateRequestEntityWithBody:(id)arg1 retryCount:(unsigned long long)arg2 uniqueId:(id)arg3;
- (id)requestEntityWithUniqueId:(id)arg1;
- (void)saveManageObjectContext;
- (void)createRequestEntityWithBody:(id)arg1 retryCount:(unsigned long long)arg2 uniqueId:(id)arg3 path:(id)arg4 date:(id)arg5 inOperationQueue:(_Bool)arg6;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

