//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSFastEnumeration.h"

@class NSDate, NSMutableDictionary, NSString;

@interface PFOperationSet : NSObject <NSCopying, NSFastEnumeration>
{
    _Bool _saveEventually;
    NSString *_uuid;
    NSDate *_updatedAt;
    NSMutableDictionary *_dictionary;
}

+ (id)operationSetFromRESTDictionary:(id)arg1 usingDecoder:(id)arg2;
@property(retain, nonatomic) NSMutableDictionary *dictionary; // @synthesize dictionary=_dictionary;
@property(copy, nonatomic) NSDate *updatedAt; // @synthesize updatedAt=_updatedAt;
@property(readonly, copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(nonatomic, getter=isSaveEventually) _Bool saveEventually; // @synthesize saveEventually=_saveEventually;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)enumerateKeysAndObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)keyEnumerator;
- (unsigned long long)count;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)objectForKey:(id)arg1;
- (id)RESTDictionaryUsingObjectEncoder:(id)arg1 operationSetUUIDs:(id *)arg2;
- (void)mergeOperationSet:(id)arg1;
- (id)initWithUUID:(id)arg1;
- (id)init;

@end

