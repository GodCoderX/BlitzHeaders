//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, TuneMessageAction, TuneMessageLabel, UIColor, UIImage;

@interface TuneMessageButton : NSObject
{
    int _messageType;
    int _buttonType;
    NSDictionary *_buttonDictionary;
    TuneMessageLabel *_title;
    UIColor *_buttonColor;
    TuneMessageAction *_action;
    UIImage *_backgroundImage;
}

@property(nonatomic) int buttonType; // @synthesize buttonType=_buttonType;
@property(nonatomic) int messageType; // @synthesize messageType=_messageType;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(retain, nonatomic) TuneMessageAction *action; // @synthesize action=_action;
@property(retain, nonatomic) UIColor *buttonColor; // @synthesize buttonColor=_buttonColor;
@property(retain, nonatomic) TuneMessageLabel *title; // @synthesize title=_title;
@property(copy, nonatomic) NSDictionary *buttonDictionary; // @synthesize buttonDictionary=_buttonDictionary;
- (void).cxx_destruct;
- (id)getUIButtonWithFrame:(struct CGRect)arg1;
- (id)buildButton;
- (void)findProperties;
- (id)initWithButtonlDictionary:(id)arg1 andMessageType:(int)arg2 andMessageButtonType:(int)arg3;
- (id)initWithButtonlDictionary:(id)arg1 andMessageType:(int)arg2;

@end

