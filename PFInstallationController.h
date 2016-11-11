/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>
#import "PFObjectControlling.h"

@class NSString;
@protocol PFObjectControllerProvider, PFCurrentInstallationControllerProvider;

@interface PFInstallationController : NSObject <PFObjectControlling> {
	id<PFObjectControllerProvider, PFCurrentInstallationControllerProvider> _dataSource;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(readonly, assign, nonatomic) __weak id<PFObjectControllerProvider, PFCurrentInstallationControllerProvider> dataSource;
+(id)controllerWithDataSource:(id)dataSource;
-(void).cxx_destruct;
-(id)currentInstallationController;
-(id)objectController;
-(id)processDeleteResultAsync:(id)async forObject:(id)object;
-(id)deleteObjectAsync:(id)async withSessionToken:(id)sessionToken;
-(id)processFetchResultAsync:(id)async forObject:(id)object;
-(id)fetchObjectAsync:(id)async withSessionToken:(id)sessionToken;
-(id)initWithDataSource:(id)dataSource;
@end

