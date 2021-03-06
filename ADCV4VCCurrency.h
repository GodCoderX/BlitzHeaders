//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ADCV4VCCurrency : NSObject
{
    int _videos_per_reward;
    int _reward_amount;
    int _balance;
    int _video_credit_balance;
    _Bool _client_side;
    NSString *_reward_name;
}

@property(readonly, nonatomic) _Bool client_side; // @synthesize client_side=_client_side;
@property(readonly, nonatomic) int balance; // @synthesize balance=_balance;
@property(readonly, nonatomic) int reward_amount; // @synthesize reward_amount=_reward_amount;
@property(readonly, nonatomic) int video_credit_balance; // @synthesize video_credit_balance=_video_credit_balance;
@property(readonly, nonatomic) int videos_per_reward; // @synthesize videos_per_reward=_videos_per_reward;
@property(readonly, nonatomic) NSString *reward_name; // @synthesize reward_name=_reward_name;
- (void).cxx_destruct;
- (void)onReward;
- (int)checkReward;
- (void)addVideoCredit;
- (id)getDictionary;
- (void)update:(id)arg1;
- (id)init:(id)arg1;

@end

