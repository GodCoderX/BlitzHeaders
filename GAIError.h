//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface GAIError : NSObject
{
}

+ (id)errorWithCode:(long long)arg1 withUnderlyingError:(id)arg2 withFormat:(id)arg3;
+ (id)errorWithCode:(long long)arg1 withUnderlyingError:(id)arg2 withDescription:(id)arg3;
+ (id)errorWithCode:(long long)arg1 withFailedFilePath:(id)arg2 withFormat:(id)arg3;
+ (id)errorWithCode:(long long)arg1 withFailedFilePath:(id)arg2 withDescription:(id)arg3;
+ (id)errorWithCode:(long long)arg1 withFormat:(id)arg2;
+ (id)errorWithCode:(long long)arg1 withDescription:(id)arg2;
+ (id)errorWithCode:(long long)arg1;
- (id)init;

@end

