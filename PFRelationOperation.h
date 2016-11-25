//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PFFieldOperation.h"

@class NSMutableSet, NSString;

@interface PFRelationOperation : PFFieldOperation
{
    NSString *targetClass;
    NSMutableSet *_relationsToAdd;
    NSMutableSet *_relationsToRemove;
}

+ (id)removeRelationToObjects:(id)arg1;
+ (id)addRelationToObjects:(id)arg1;
@property(retain, nonatomic) NSMutableSet *relationsToRemove; // @synthesize relationsToRemove=_relationsToRemove;
@property(retain, nonatomic) NSMutableSet *relationsToAdd; // @synthesize relationsToAdd=_relationsToAdd;
@property(copy, nonatomic) NSString *targetClass; // @synthesize targetClass;
- (void).cxx_destruct;
- (id)applyToValue:(id)arg1 forKey:(id)arg2;
- (id)mergeWithPrevious:(id)arg1;
- (id)encodeWithObjectEncoder:(id)arg1;
- (id)_convertToArrayInSet:(id)arg1 withObjectEncoder:(id)arg2;
- (id)description;
- (id)init;

@end

