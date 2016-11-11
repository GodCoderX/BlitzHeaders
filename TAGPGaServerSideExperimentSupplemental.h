/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "TAGPBGeneratedMessage.h"

@class NSString, TAGPBMutableArray;

__attribute__((visibility("hidden")))
@interface TAGPGaServerSideExperimentSupplemental : TAGPBGeneratedMessage {
}
@property(assign, nonatomic) long long lastUpdateTimeMs;
@property(assign, nonatomic) BOOL hasLastUpdateTimeMs;
@property(retain, nonatomic) TAGPBMutableArray* weightBucketMassSumArray;
@property(assign, nonatomic) BOOL hasWeightBucketMassSumArray;
@property(retain, nonatomic) TAGPBMutableArray* weightBucketArray;
@property(assign, nonatomic) BOOL hasWeightBucketArray;
@property(retain, nonatomic) TAGPBMutableArray* combinationArray;
@property(assign, nonatomic) BOOL hasCombinationArray;
@property(assign, nonatomic) double inclusionProbability;
@property(assign, nonatomic) BOOL hasInclusionProbability;
@property(assign, nonatomic) BOOL enabled;
@property(assign, nonatomic) BOOL hasEnabled;
@property(retain, nonatomic) NSString* experimentId;
@property(assign, nonatomic) BOOL hasExperimentId;
@property(retain, nonatomic) NSString* experimentKey;
@property(assign, nonatomic) BOOL hasExperimentKey;
+(id)descriptor;
@end

