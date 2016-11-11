/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>

@class NSString;

@interface ADCV4VCCurrency : NSObject {
	int _videos_per_reward;
	int _reward_amount;
	int _balance;
	int _video_credit_balance;
	BOOL _client_side;
	NSString* _reward_name;
}
@property(readonly, assign, nonatomic) BOOL client_side;
@property(readonly, assign, nonatomic) int balance;
@property(readonly, assign, nonatomic) int reward_amount;
@property(readonly, assign, nonatomic) int video_credit_balance;
@property(readonly, assign, nonatomic) int videos_per_reward;
@property(readonly, assign, nonatomic) NSString* reward_name;
-(void).cxx_destruct;
-(void)onReward;
-(int)checkReward;
-(void)addVideoCredit;
-(id)getDictionary;
-(void)update:(id)update;
-(id)init:(id)init;
@end

