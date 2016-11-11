/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface PFObjectSubclassingController : NSObject {
	NSObject<OS_dispatch_queue>* _registeredSubclassesAccessQueue;
	NSMutableDictionary* _registeredSubclasses;
	NSMutableDictionary* _unregisteredSubclasses;
}
+(void)clearDefaultController;
+(id)defaultController;
-(void).cxx_destruct;
-(void)_rawRegisterSubclass:(Class)subclass;
-(id)_subclassInfoForClass:(Class)aClass;
-(void)_forwardSetterInvocation:(id)invocation forProperty:(id)property withObject:(id)object;
-(void)_forwardGetterInvocation:(id)invocation forProperty:(id)property withObject:(id)object;
-(id)forwardingMethodSignatureForSelector:(SEL)selector ofClass:(Class)aClass;
-(BOOL)forwardObjectInvocation:(id)invocation withObject:(id)object;
-(void)unregisterSubclass:(Class)subclass;
-(void)registerSubclass:(Class)subclass;
-(Class)subclassForParseClassName:(id)parseClassName;
-(id)init;
@end

