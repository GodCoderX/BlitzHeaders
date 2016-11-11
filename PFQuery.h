/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>
#import "wotblitz-Structs.h"
#import "NSCopying.h"

@class NSString, BFCancellationTokenSource, PFMutableQueryState;

@interface PFQuery : NSObject <NSCopying> {
	BFCancellationTokenSource* _cancellationTokenSource;
	PFMutableQueryState* _state;
}
@property(retain, nonatomic) PFMutableQueryState* state;
@property(assign, nonatomic) BOOL trace;
@property(assign) double maxCacheAge;
@property(assign) unsigned char cachePolicy;
@property(assign, nonatomic) int skip;
@property(assign, nonatomic) int limit;
@property(retain, nonatomic) NSString* parseClassName;
+(id)_getCurrentUserForQueryState:(id)queryState;
+(id)queryController;
+(void)clearAllCachedResults;
+(id)queryForUser;
+(id)getUserObjectWithId:(id)anId error:(id*)error;
+(id)getUserObjectWithId:(id)anId;
+(id)getObjectOfClass:(id)aClass objectId:(id)anId error:(id*)error;
+(id)getObjectOfClass:(id)aClass objectId:(id)anId;
+(id)orQueryWithSubqueries:(id)subqueries;
+(id)queryWithClassName:(id)className predicate:(id)predicate;
+(id)queryWithClassName:(id)className;
+(id)queryWithClassName:(id)className normalizedPredicate:(id)predicate;
+(void)assertKeyPathConstant:(id)constant;
-(void).cxx_destruct;
-(void)_validateQueryState;
-(id)_queryStateCopyWithCachePolicy:(unsigned char)cachePolicy;
-(id)_queryStateCopy;
-(id)ignoreACLs;
-(id)fromPinWithName:(id)name;
-(id)fromPin;
-(id)fromLocalDatastore;
-(void)_checkPinningEnabled:(BOOL)enabled;
-(void)clearCachedResult;
-(BOOL)hasCachedResult;
-(BOOL)isEqual:(id)equal;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)zone;
-(void)cancel;
-(id)_countObjectsAsyncForQueryState:(id)queryState after:(id)after;
-(void)countObjectsInBackgroundWithBlock:(id)block;
-(void)countObjectsInBackgroundWithTarget:(id)target selector:(SEL)selector;
-(id)countObjectsInBackground;
-(int)countObjects:(id*)objects;
-(int)countObjects;
-(id)_getFirstObjectAsyncWithCachePolicy:(unsigned char)cachePolicy after:(id)after;
-(void)getFirstObjectInBackgroundWithTarget:(id)target selector:(SEL)selector;
-(void)getFirstObjectInBackgroundWithBlock:(id)block;
-(id)getFirstObjectInBackground;
-(id)getFirstObject:(id*)object;
-(id)getFirstObject;
-(id)_findObjectsAsyncForQueryState:(id)queryState after:(id)after;
-(void)findObjectsInBackgroundWithTarget:(id)target selector:(SEL)selector;
-(void)findObjectsInBackgroundWithBlock:(id)block;
-(id)findObjectsInBackground;
-(id)findObjects:(id*)objects;
-(id)findObjects;
-(id)_getObjectWithIdAsync:(id)idAsync cachePolicy:(unsigned char)policy after:(id)after;
-(void)getObjectInBackgroundWithId:(id)anId target:(id)target selector:(SEL)selector;
-(void)getObjectInBackgroundWithId:(id)anId block:(id)block;
-(id)getObjectInBackgroundWithId:(id)anId;
-(id)getObjectWithId:(id)anId error:(id*)error;
-(id)getObjectWithId:(id)anId;
-(void)markAsRunning:(id)running;
-(void)checkIfCommandIsRunning;
-(void)whereComparisonPredicate:(id)predicate;
-(id)selectKeys:(id)keys;
-(id)includeKey:(id)key;
-(void)redirectClassNameForKey:(id)key;
-(id)whereRelatedToObject:(id)object fromKey:(id)key;
-(id)whereKey:(id)key doesNotMatchKey:(id)key2 inQuery:(id)query;
-(id)whereKey:(id)key matchesKey:(id)key2 inQuery:(id)query;
-(id)whereKey:(id)key doesNotMatchQuery:(id)query;
-(id)whereKey:(id)key matchesQuery:(id)query;
-(id)whereKeyDoesNotExist:(id)exist;
-(id)whereKeyExists:(id)exists;
-(id)whereKey:(id)key hasSuffix:(id)suffix;
-(id)whereKey:(id)key hasPrefix:(id)prefix;
-(id)whereKey:(id)key containsString:(id)string;
-(id)whereKey:(id)key matchesRegex:(id)regex modifiers:(id)modifiers;
-(id)whereKey:(id)key matchesRegex:(id)regex;
-(id)whereKey:(id)key withinGeoBoxFromSouthwest:(id)southwest toNortheast:(id)northeast;
-(id)whereKey:(id)key nearGeoPoint:(id)point withinKilometers:(double)kilometers;
-(id)whereKey:(id)key nearGeoPoint:(id)point withinMiles:(double)miles;
-(id)whereKey:(id)key nearGeoPoint:(id)point withinRadians:(double)radians;
-(id)whereKey:(id)key nearGeoPoint:(id)point;
-(id)whereKey:(id)key containsAllObjectsInArray:(id)array;
-(id)whereKey:(id)key notContainedIn:(id)anIn;
-(id)whereKey:(id)key containedIn:(id)anIn;
-(id)whereKey:(id)key notEqualTo:(id)to;
-(id)whereKey:(id)key lessThanOrEqualTo:(id)to;
-(id)whereKey:(id)key lessThan:(id)than;
-(id)whereKey:(id)key greaterThanOrEqualTo:(id)to;
-(id)whereKey:(id)key greaterThan:(id)than;
-(id)whereKey:(id)key equalTo:(id)to;
-(id)whereKey:(id)key condition:(id)condition object:(id)object;
-(id)orderBySortDescriptors:(id)descriptors;
-(id)orderBySortDescriptor:(id)descriptor;
-(id)addDescendingOrder:(id)order;
-(id)orderByDescending:(id)descending;
-(id)addAscendingOrder:(id)order;
-(id)orderByAscending:(id)ascending;
-(id)initWithClassName:(id)className;
-(id)initWithState:(id)state;
@end

