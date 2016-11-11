/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>
#import "ParseModule.h"

@class NSString, NSPointerArray;
@protocol OS_dispatch_queue;

@interface ParseModuleCollection : NSObject <ParseModule> {
	NSObject<OS_dispatch_queue>* _collectionQueue;
	NSPointerArray* _modules;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain) NSPointerArray* modules;
@property(retain) NSObject<OS_dispatch_queue>* collectionQueue;
-(void).cxx_destruct;
-(void)enumerateModulesWithBlock:(id)block;
-(void)performCollectionAccessBlock:(id)block;
-(void)parseDidInitializeWithApplicationId:(id)parse clientKey:(id)key;
-(unsigned)modulesCount;
-(BOOL)containsModule:(id)module;
-(void)removeParseModule:(id)module;
-(void)addParseModule:(id)module;
-(id)init;
@end

