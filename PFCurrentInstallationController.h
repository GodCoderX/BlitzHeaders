/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "PFCurrentObjectControlling.h"
#import </libobjc.A.h>

@class PFAsyncTaskQueue, PFInstallation, NSString, PFFileManager, PFInstallationIdentifierStore;
@protocol PFFileManagerProvider, OS_dispatch_queue, PFObjectFilePersistenceControllerProvider, PFInstallationIdentifierStoreProvider;

@interface PFCurrentInstallationController : NSObject <PFCurrentObjectControlling> {
	NSObject<OS_dispatch_queue>* _dataQueue;
	PFAsyncTaskQueue* _dataTaskQueue;
	BOOL _currentInstallationMatchesDisk;
	unsigned _storageType;
	PFInstallation* _currentInstallation;
	id<PFFileManagerProvider, PFInstallationIdentifierStoreProvider> _commonDataSource;
	id<PFObjectFilePersistenceControllerProvider> _coreDataSource;
}
@property(readonly, assign, nonatomic) unsigned storageType;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) BOOL currentInstallationMatchesDisk;
@property(retain, nonatomic) PFInstallation* currentInstallation;
@property(readonly, assign, nonatomic) PFInstallationIdentifierStore* installationIdentifierStore;
@property(readonly, assign, nonatomic) PFFileManager* fileManager;
@property(readonly, assign, nonatomic) PFInstallation* memoryCachedCurrentInstallation;
@property(readonly, assign, nonatomic) __weak id<PFObjectFilePersistenceControllerProvider> coreDataSource;
@property(readonly, assign, nonatomic) __weak id<PFFileManagerProvider, PFInstallationIdentifierStoreProvider> commonDataSource;
+(id)controllerWithStorageType:(unsigned)storageType commonDataSource:(id)source coreDataSource:(id)source3;
-(void).cxx_destruct;
-(id)objectFilePersistenceController;
-(id)_saveCurrentInstallationToDiskAsync:(id)diskAsync;
-(id)_loadCurrentInstallationFromDiskAsync;
-(id)clearMemoryCachedCurrentInstallationAsync;
-(id)clearCurrentInstallationAsync;
-(id)saveCurrentObjectAsync:(id)async;
-(id)getCurrentObjectAsync;
-(id)initWithStorageType:(unsigned)storageType commonDataSource:(id)source coreDataSource:(id)source3;
@end

