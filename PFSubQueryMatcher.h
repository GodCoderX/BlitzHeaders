//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BFTask, PFOfflineStore, PFQuery;

@interface PFSubQueryMatcher : NSObject
{
    PFQuery *_subQuery;
    BFTask *_subQueryResults;
    PFOfflineStore *_offlineStore;
}

@property(readonly, nonatomic) PFOfflineStore *offlineStore; // @synthesize offlineStore=_offlineStore;
@property(retain, nonatomic) BFTask *subQueryResults; // @synthesize subQueryResults=_subQueryResults;
@property(readonly, nonatomic) PFQuery *subQuery; // @synthesize subQuery=_subQuery;
- (void).cxx_destruct;
- (CDUnknownBlockType)createMatcherWithSubQueryMatcherBlock:(CDUnknownBlockType)arg1 user:(id)arg2;
- (id)initWithSubQuery:(id)arg1 offlineStore:(id)arg2;

@end

