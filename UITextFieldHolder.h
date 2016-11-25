//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITextFieldDelegate.h"
#import "UITextViewDelegate.h"

@class NSString, UITextField;

@interface UITextFieldHolder : UIView <UITextFieldDelegate, UITextViewDelegate>
{
    NSString *cachedText;
    _Bool isKeyboardHidden;
    UITextField *textField;
    UIView *textCtrl;
    struct UITextField *cppTextField;
    _Bool textInputAllowed;
    _Bool useRtlAlign;
    struct CGRect lastKeyboardFrame;
}

- (void)keyboardDidShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardFrameDidChange:(id)arg1;
- (long long)convertReturnKeyType:(int)arg1;
- (long long)convertKeyboardType:(int)arg1;
- (long long)convertKeyboardAppearanceType:(int)arg1;
- (_Bool)convertEnablesReturnKeyAutomatically:(_Bool)arg1;
- (long long)convertSpellCheckingType:(int)arg1;
- (long long)convertAutoCorrectionType:(int)arg1;
- (long long)convertAutoCapitalizationType:(int)arg1;
- (void)setupTraits;
- (void)setUseRtlAlign:(_Bool)arg1;
- (void)setTextInputAllowed:(_Bool)arg1;
- (void)setIsPassword:(_Bool)arg1;
- (void)dropCachedText;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)eventEditingChanged:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)dealloc;
- (void)textViewDidBeginEditing:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)setTextField:(struct UITextField *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

