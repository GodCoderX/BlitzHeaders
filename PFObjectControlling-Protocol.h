//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BFTask, NSDictionary, NSString, PFObject;

@protocol PFObjectControlling <NSObject>
- (BFTask *)processDeleteResultAsync:(NSDictionary *)arg1 forObject:(PFObject *)arg2;
- (BFTask *)deleteObjectAsync:(PFObject *)arg1 withSessionToken:(NSString *)arg2;
- (BFTask *)processFetchResultAsync:(NSDictionary *)arg1 forObject:(PFObject *)arg2;
- (BFTask *)fetchObjectAsync:(PFObject *)arg1 withSessionToken:(NSString *)arg2;
@end

