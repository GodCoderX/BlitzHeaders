//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSMutableDictionary;

@interface PFObjectEstimatedData : NSObject
{
    NSMutableDictionary *_dataDictionary;
}

+ (id)estimatedDataFromServerData:(id)arg1 operationSetQueue:(id)arg2;
- (void).cxx_destruct;
- (id)applyFieldOperation:(id)arg1 forKey:(id)arg2;
@property(readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property(readonly, copy, nonatomic) NSArray *allKeys;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)enumerateKeysAndObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)initWithServerData:(id)arg1 operationSetQueue:(id)arg2;
- (id)init;

@end

