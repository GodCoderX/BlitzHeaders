//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PFPushState.h"

@class NSDate, NSDictionary, NSNumber, NSSet, PFQueryState;

@interface PFMutablePushState : PFPushState
{
}

- (void)setPayloadWithMessage:(id)arg1;

// Remaining properties
@property(copy, nonatomic) NSSet *channels; // @dynamic channels;
@property(retain, nonatomic) NSDate *expirationDate; // @dynamic expirationDate;
@property(copy, nonatomic) NSNumber *expirationTimeInterval; // @dynamic expirationTimeInterval;
@property(copy, nonatomic) NSDictionary *payload; // @dynamic payload;
@property(copy, nonatomic) PFQueryState *queryState; // @dynamic queryState;

@end

