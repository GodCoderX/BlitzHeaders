//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BFTask, PFObject;

@protocol PFCurrentObjectControlling <NSObject>
@property(readonly, nonatomic) unsigned long long storageType;
- (BFTask *)saveCurrentObjectAsync:(PFObject *)arg1;
- (BFTask *)getCurrentObjectAsync;
@end

