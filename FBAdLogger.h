//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FBAdLogger : NSObject
{
}

+ (id)levelAsString:(int)arg1;
+ (void)logAtLevel:(int)arg1 file:(const char *)arg2 lineNumber:(int)arg3 format:(id)arg4;
+ (void)setLogLevel:(long long)arg1;
+ (long long)getLogLevel;

@end

