/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSCopying.h"
#import "PFQueryState.h"

@class NSMutableDictionary, NSMutableSet, NSMutableArray, NSString;

@interface PFMutableQueryState : PFQueryState <NSCopying> {
	NSMutableDictionary* _conditions;
	NSMutableArray* _sortKeys;
	NSMutableSet* _includedKeys;
	NSMutableDictionary* _extraOptions;
}
@property(copy, nonatomic) NSString* localDatastorePinName;
@property(assign, nonatomic) BOOL queriesLocalDatastore;
@property(assign, nonatomic) BOOL shouldIncludeDeletingEventually;
@property(assign, nonatomic) BOOL shouldIgnoreACLs;
@property(assign, nonatomic) BOOL trace;
@property(assign, nonatomic) double maxCacheAge;
@property(assign, nonatomic) unsigned char cachePolicy;
@property(assign, nonatomic) int skip;
@property(assign, nonatomic) int limit;
@property(copy, nonatomic) NSString* parseClassName;
+(id)stateWithParseClassName:(id)parseClassName;
+(id)propertyAttributes;
-(id)extraOptions;
-(id)includedKeys;
-(id)sortKeys;
-(id)conditions;
-(void).cxx_destruct;
-(void)redirectClassNameForKey:(id)key;
-(void)selectKeys:(id)keys;
-(void)includeKey:(id)key;
-(void)addSortKeysFromSortDescriptors:(id)sortDescriptors;
-(void)addSortKey:(id)key ascending:(BOOL)ascending;
-(void)sortByKey:(id)key ascending:(BOOL)ascending;
-(void)removeAllConditions;
-(void)setRelationConditionWithObject:(id)object forKey:(id)key;
-(void)setEqualityConditionWithObject:(id)object forKey:(id)key;
-(void)setConditionType:(id)type withObject:(id)object forKey:(id)key;
-(id)initWithParseClassName:(id)parseClassName;
@end
