/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>
#import "UIAlertViewDelegate.h"

@class NSString, NSMutableArray, UIAlertView;

@interface ADCAlert : NSObject <UIAlertViewDelegate> {
	NSString* _title;
	NSString* _message;
	NSMutableArray* _actions;
	UIAlertView* _alertView;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(void)alertView:(id)view didDismissWithButtonIndex:(int)buttonIndex;
-(void)show;
-(void)addActionWithTitle:(id)title completionHandler:(id)handler;
-(id)initWithTitle:(id)title message:(id)message;
@end

