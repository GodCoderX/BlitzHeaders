//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIAlertViewDelegate.h"

@class NSString, UIAlertView;

@interface CBAlertViewWrapper : NSObject <UIAlertViewDelegate>
{
    _Bool _displayed;
    UIAlertView *_alertView;
    CDUnknownBlockType _callback;
}

@property(nonatomic) _Bool displayed; // @synthesize displayed=_displayed;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(retain, nonatomic) UIAlertView *alertView; // @synthesize alertView=_alertView;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showWithCallback:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 confirmButtonTitle:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

