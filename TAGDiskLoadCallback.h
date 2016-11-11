/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>
#import "TAGLoadCallback.h"

@class NSString, TAGContainer;
@protocol TAGContainerCallback;

__attribute__((visibility("hidden")))
@interface TAGDiskLoadCallback : NSObject <TAGLoadCallback> {
	id<TAGContainerCallback> _callback;
	TAGContainer* _container;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain) TAGContainer* container;
@property(retain) id<TAGContainerCallback> callback;
-(void).cxx_destruct;
-(void)close;
-(int)failureToRefreshFailure:(int)refreshFailure;
-(void)onFailure:(int)failure;
-(void)onSuccess:(id)success;
-(void)startLoad;
-(id)initWithCallback:(id)callback container:(id)container;
@end

