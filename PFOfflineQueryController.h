/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "PFQueryController.h"
#import "PFQueryControllerSubclass.h"

@class NSString, PFOfflineStore;
@protocol PFPinningObjectStoreProvider, PFCommandRunnerProvider, PFOfflineStoreProvider;

@interface PFOfflineQueryController : PFQueryController <PFQueryControllerSubclass> {
	PFOfflineStore* _offlineStore;
	id<PFPinningObjectStoreProvider> _coreDataSource;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(readonly, assign, nonatomic) __weak id<PFPinningObjectStoreProvider> coreDataSource;
@property(readonly, assign, nonatomic) __weak id<PFCommandRunnerProvider, PFOfflineStoreProvider> commonDataSource;
+(id)controllerWithCommonDataSource:(id)commonDataSource coreDataSource:(id)source;
-(void).cxx_destruct;
-(id)runNetworkCommandAsync:(id)async withCancellationToken:(id)cancellationToken forQueryState:(id)queryState;
-(id)_countObjectsFromLocalDatastoreAsyncForQueryState:(id)queryState withCancellationToken:(id)cancellationToken user:(id)user;
-(id)countObjectsAsyncForQueryState:(id)queryState withCancellationToken:(id)cancellationToken user:(id)user;
-(id)_findObjectsFromLocalDatastoreAsyncForQueryState:(id)queryState withCancellationToken:(id)cancellationToken user:(id)user;
-(id)_findObjectsAsyncInRelation:(id)relation ofObject:(id)object forQueryState:(id)queryState withCancellationToken:(id)cancellationToken user:(id)user;
-(id)findObjectsAsyncForQueryState:(id)queryState withCancellationToken:(id)cancellationToken user:(id)user;
-(id)initWithCommonDataSource:(id)commonDataSource coreDataSource:(id)source;
-(id)initWithCommonDataSource:(id)commonDataSource;
@end

