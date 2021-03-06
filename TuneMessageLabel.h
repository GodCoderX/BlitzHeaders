//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString, UIColor, UIFont;

@interface TuneMessageLabel : NSObject
{
    _Bool _headlineLabel;
    _Bool _buttonLabel;
    int _messageType;
    int _buttonType;
    int _orientation;
    NSDictionary *_labelDictionary;
    NSString *_text;
    long long _alignment;
    UIColor *_textColor;
    UIFont *_font;
    NSString *_fontName;
}

@property(nonatomic) int orientation; // @synthesize orientation=_orientation;
@property(nonatomic) int buttonType; // @synthesize buttonType=_buttonType;
@property(nonatomic) int messageType; // @synthesize messageType=_messageType;
@property(copy, nonatomic) NSString *fontName; // @synthesize fontName=_fontName;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(nonatomic) long long alignment; // @synthesize alignment=_alignment;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(copy, nonatomic) NSDictionary *labelDictionary; // @synthesize labelDictionary=_labelDictionary;
- (void).cxx_destruct;
- (id)getUILabelWithFrame:(struct CGRect)arg1;
- (id)buildLabel;
- (void)findProperties;
- (id)initWithLabelDictionary:(id)arg1 messageType:(int)arg2 andOrientation:(int)arg3;
- (id)initWithButtonLabelDictionary:(id)arg1 andMessageType:(int)arg2 andMessageButtonType:(int)arg3;
- (id)initWithHeadlineLabelDictionary:(id)arg1 messageType:(int)arg2;
- (id)initWithLabelDictionary:(id)arg1 andMessageType:(int)arg2;

@end

