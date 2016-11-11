/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <UIKit/UIView.h>
#import "wotblitz-Structs.h"
#import "UITextFieldDelegate.h"
#import "UITextViewDelegate.h"

@class NSString, UITextField;

__attribute__((visibility("hidden")))
@interface UITextFieldHolder : UIView <UITextFieldDelegate, UITextViewDelegate> {
	NSString* cachedText;
	UITextField* textField;
	UIView* textCtrl;
	UITextField* cppTextField;
	BOOL textInputAllowed;
	BOOL useRtlAlign;
	CGRect lastKeyboardFrame;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void)keyboardDidShow:(id)keyboard;
-(void)keyboardWillHide:(id)keyboard;
-(void)keyboardFrameDidChange:(id)keyboardFrame;
-(int)convertReturnKeyType:(int)type;
-(int)convertKeyboardType:(int)type;
-(int)convertKeyboardAppearanceType:(int)type;
-(BOOL)convertEnablesReturnKeyAutomatically:(bool)automatically;
-(int)convertSpellCheckingType:(int)type;
-(int)convertAutoCorrectionType:(int)type;
-(int)convertAutoCapitalizationType:(int)type;
-(void)setupTraits;
-(void)setUseRtlAlign:(bool)align;
-(void)setTextInputAllowed:(bool)allowed;
-(void)setIsPassword:(bool)password;
-(void)dropCachedText;
-(BOOL)textViewShouldBeginEditing:(id)textView;
-(BOOL)textFieldShouldBeginEditing:(id)textField;
-(void)textViewDidChange:(id)textView;
-(void)eventEditingChanged:(id)changed;
-(BOOL)textView:(id)view shouldChangeTextInRange:(NSRange)range replacementText:(id)text;
-(BOOL)textField:(id)field shouldChangeCharactersInRange:(NSRange)range replacementString:(id)string;
-(BOOL)textFieldShouldReturn:(id)textField;
-(void)dealloc;
-(void)textViewDidBeginEditing:(id)textView;
-(id)hitTest:(CGPoint)test withEvent:(id)event;
-(void)textFieldDidBeginEditing:(id)textField;
-(void)setTextField:(UITextField*)field;
-(id)init;
@end

