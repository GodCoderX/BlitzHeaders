//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PFQueryUtilities : NSObject
{
}

+ (id)objectNotFoundError;
+ (id)regexStringForString:(id)arg1;
+ (id)_hoistCommonPredicates:(id)arg1;
+ (id)_normalizeToDNF:(id)arg1;
+ (void)assertNoPredicateModifiers:(id)arg1;
+ (id)asOrOfAnds:(id)arg1;
+ (id)reverseYodaConditions:(id)arg1;
+ (id)removeBetween:(id)arg1;
+ (id)removeNegation:(id)arg1;
+ (id)_negatePredicate:(id)arg1;
+ (id)_mapPredicate:(id)arg1 compoundBlock:(CDUnknownBlockType)arg2 comparisonBlock:(CDUnknownBlockType)arg3;
+ (id)predicateByNormalizingPredicate:(id)arg1;

@end

