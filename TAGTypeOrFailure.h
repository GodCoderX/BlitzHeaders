//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TAGTypeOrFailure : NSObject
{
    id _type;
    long long _failure;
}

@property(readonly, nonatomic) long long failure; // @synthesize failure=_failure;
@property(readonly, nonatomic) id type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)initWithFailure:(long long)arg1;
- (id)initWithType:(id)arg1;

@end

