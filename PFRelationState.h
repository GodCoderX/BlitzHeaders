/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "wotblitz-Structs.h"
#import "NSCopying.h"
#import "PFBaseState.h"
#import "PFBaseStateSubclass.h"
#import "NSMutableCopying.h"

@class NSString, PFObject, NSSet;

@interface PFRelationState : PFBaseState <PFBaseStateSubclass, NSCopying, NSMutableCopying> {
	PFObject* _parent;
	NSString* _parentClassName;
	NSString* _parentObjectId;
	NSSet* _knownObjects;
	NSString* _key;
	NSString* _targetClass;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(copy, nonatomic) NSString* key;
@property(copy, nonatomic) NSSet* knownObjects;
@property(copy, nonatomic) NSString* targetClass;
@property(copy, nonatomic) NSString* parentObjectId;
@property(copy, nonatomic) NSString* parentClassName;
@property(assign, nonatomic) __weak PFObject* parent;
+(id)stateWithState:(id)state;
+(id)propertyAttributes;
-(void).cxx_destruct;
-(id)mutableCopyWithZone:(NSZone*)zone;
-(id)copyWithZone:(NSZone*)zone;
-(id)initWithState:(id)state;
-(id)init;
@end

