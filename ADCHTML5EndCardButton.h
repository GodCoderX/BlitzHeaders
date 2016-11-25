//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ADCViewElement.h"

@class NSString, UIButton, UIView;

@interface ADCHTML5EndCardButton : ADCViewElement
{
    _Bool _enabled;
    UIButton *_button;
    NSString *_click_action;
    NSString *_click_action_type;
    UIView *_owner;
    int _position;
    id _ad;
}

@property(nonatomic) id ad; // @synthesize ad=_ad;
- (void).cxx_destruct;
- (void)freePlaybackResources;
- (void)setAlpha:(double)arg1;
- (void)setVisible:(_Bool)arg1;
- (void)buttonPushed:(id)arg1;
- (_Bool)show:(id)arg1;
- (void)layout:(id)arg1;
- (void)update:(id)arg1;
- (id)init:(id)arg1 inAd:(id)arg2 withPosition:(int)arg3;

@end

