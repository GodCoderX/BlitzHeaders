//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class NSString;

@interface GAITrackedViewController : UIViewController
{
    id <GAITracker> _tracker;
    NSString *_screenName;
}

@property(copy, nonatomic) NSString *screenName; // @synthesize screenName=_screenName;
@property(nonatomic) id <GAITracker> tracker; // @synthesize tracker=_tracker;
- (void).cxx_destruct;
- (void)viewDidAppear:(_Bool)arg1;

@end

