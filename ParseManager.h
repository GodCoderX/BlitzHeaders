/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>
#import "PFCommandRunnerProvider.h"
#import "PFKeychainStoreProvider.h"
#import "PFFileManagerProvider.h"
#import "PFOfflineStoreProvider.h"
#import "PFKeyValueCacheProvider.h"
#import "PFInstallationIdentifierStoreProvider.h"
#import "PFCoreManagerDataSource.h"
#import "PFEventuallyQueueProvider.h"

@class PFInstallationIdentifierStore, PFEventuallyQueue, PFCoreManager, PFPurchaseController, PFPushManager, NSString, PFAnalyticsController, PFKeychainStore, PFFileManager, PFOfflineStore, PFKeyValueCache;
@protocol PFCommandRunning, OS_dispatch_queue;

@interface ParseManager : NSObject <PFCoreManagerDataSource, PFCommandRunnerProvider, PFFileManagerProvider, PFOfflineStoreProvider, PFEventuallyQueueProvider, PFKeychainStoreProvider, PFKeyValueCacheProvider, PFInstallationIdentifierStoreProvider> {
	NSObject<OS_dispatch_queue>* _offlineStoreAccessQueue;
	NSObject<OS_dispatch_queue>* _eventuallyQueueAccessQueue;
	NSObject<OS_dispatch_queue>* _keychainStoreAccessQueue;
	NSObject<OS_dispatch_queue>* _fileManagerAccessQueue;
	NSObject<OS_dispatch_queue>* _installationIdentifierStoreAccessQueue;
	NSObject<OS_dispatch_queue>* _commandRunnerAccessQueue;
	NSObject<OS_dispatch_queue>* _keyValueCacheAccessQueue;
	NSObject<OS_dispatch_queue>* _coreManagerAccessQueue;
	NSObject<OS_dispatch_queue>* _pushManagerAccessQueue;
	NSObject<OS_dispatch_queue>* _controllerAccessQueue;
	NSObject<OS_dispatch_queue>* _preloadQueue;
	PFKeychainStore* _keychainStore;
	PFFileManager* _fileManager;
	PFOfflineStore* _offlineStore;
	PFEventuallyQueue* _eventuallyQueue;
	PFInstallationIdentifierStore* _installationIdentifierStore;
	id<PFCommandRunning> _commandRunner;
	PFKeyValueCache* _keyValueCache;
	PFCoreManager* _coreManager;
	PFAnalyticsController* _analyticsController;
	PFPushManager* _pushManager;
	PFPurchaseController* _purchaseController;
	NSString* _applicationId;
	NSString* _clientKey;
	NSString* _applicationGroupIdentifier;
	NSString* _containingApplicationIdentifier;
}
@property(readonly, assign, nonatomic) PFEventuallyQueue* eventuallyQueue;
@property(readonly, assign, nonatomic) PFInstallationIdentifierStore* installationIdentifierStore;
@property(readonly, assign, nonatomic) PFKeyValueCache* keyValueCache;
@property(readonly, assign, nonatomic, getter=isOfflineStoreLoaded) BOOL offlineStoreLoaded;
@property(retain, nonatomic) PFOfflineStore* offlineStore;
@property(readonly, assign, nonatomic) PFFileManager* fileManager;
@property(readonly, assign, nonatomic) PFKeychainStore* keychainStore;
@property(readonly, assign, nonatomic) id<PFCommandRunning> commandRunner;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) PFPurchaseController* purchaseController;
@property(retain, nonatomic) PFAnalyticsController* analyticsController;
@property(retain, nonatomic) PFPushManager* pushManager;
@property(readonly, assign, nonatomic) PFCoreManager* coreManager;
@property(readonly, copy, nonatomic) NSString* containingApplicationIdentifier;
@property(readonly, copy, nonatomic) NSString* applicationGroupIdentifier;
@property(readonly, copy, nonatomic) NSString* clientKey;
@property(readonly, copy, nonatomic) NSString* applicationId;
-(void).cxx_destruct;
-(void)_migrateSandboxDataToApplicationGroupContainerIfNeeded;
-(void)_checkApplicationId;
-(id)preloadDiskObjectsToMemoryAsync;
-(void)unloadCoreManager;
-(void)clearEventuallyQueue;
-(id)_newCommandCache;
-(void)loadOfflineStoreWithOptions:(unsigned char)options;
-(void)configureWithApplicationGroupIdentifier:(id)applicationGroupIdentifier containingApplicationIdentifier:(id)identifier enabledLocalDataStore:(BOOL)store;
-(id)initWithApplicationId:(id)applicationId clientKey:(id)key;
-(id)init;
@end

