//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ADCIAPManager : NSObject
{
}

+ (id)sharedManager;
- (id)cachedIAPReports;
- (void)clearIAPReports;
- (void)saveIAPReport:(id)arg1;
- (void)handleV4IAPRequest;

@end

