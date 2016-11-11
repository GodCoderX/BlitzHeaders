/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>

@class NSString, PFMutableRelationState;
@protocol OS_dispatch_queue;

@interface PFRelation : NSObject {
	NSObject<OS_dispatch_queue>* _stateAccessQueue;
	PFMutableRelationState* _state;
}
@property(copy) PFMutableRelationState* state;
@property(copy, nonatomic) NSString* targetClass;
+(id)relationFromDictionary:(id)dictionary withDecoder:(id)decoder;
+(id)relationWithTargetClass:(id)targetClass;
+(id)relationForObject:(id)object forKey:(id)key;
-(void).cxx_destruct;
-(void)_removeKnownObject:(id)object;
-(void)_addKnownObject:(id)object;
-(BOOL)_hasKnownObject:(id)object;
-(id)encodeIntoDictionary;
-(void)removeObject:(id)object;
-(void)addObject:(id)object;
-(id)query;
-(id)description;
-(void)ensureParentIs:(id)is andKeyIs:(id)is2;
-(id)initFromDictionary:(id)dictionary withDecoder:(id)decoder;
-(id)initWithTargetClass:(id)targetClass;
-(id)initWithParent:(id)parent key:(id)key;
-(id)init;
@end
