//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString;

@interface PFKeyValueCacheEntry : NSObject
{
    NSString *_value;
    NSDate *_creationTime;
}

+ (id)cacheEntryWithValue:(id)arg1 creationTime:(id)arg2;
+ (id)cacheEntryWithValue:(id)arg1;
@property(readonly) NSDate *creationTime; // @synthesize creationTime=_creationTime;
@property(copy) NSString *value; // @synthesize value=_value;
- (void).cxx_destruct;
- (id)initWithValue:(id)arg1 creationTime:(id)arg2;
- (id)initWithValue:(id)arg1;
- (id)init;

@end

