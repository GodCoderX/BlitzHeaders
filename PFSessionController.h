//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PFSessionController : NSObject
{
    id <PFCommandRunnerProvider> _dataSource;
}

+ (id)controllerWithDataSource:(id)arg1;
@property(readonly, nonatomic) __weak id <PFCommandRunnerProvider> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (id)getCurrentSessionAsyncWithSessionToken:(id)arg1;
- (id)initWithDataSource:(id)arg1;

@end

