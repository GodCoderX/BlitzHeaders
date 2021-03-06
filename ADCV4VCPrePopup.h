//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ADCViewElement.h"

@class NSString, UIImageView, UILabel, UIView;

@interface ADCV4VCPrePopup : ADCViewElement
{
    UIView *_background;
    UIImageView *_background_logo;
    int _background_logo_width;
    int _background_logo_height;
    int _background_logo_scale;
    UILabel *_label_view;
    NSString *_label_reward;
    NSString *_label_fraction;
    NSString *_label_rgba;
    NSString *_label_shadow_rgba;
    UIView *_dialog;
    UIImageView *_dialog_background;
    UIImageView *_dialog_logo;
    int _dialog_logo_width;
    int _dialog_logo_height;
    int _dialog_logo_scale;
    id _ad;
}

@property(nonatomic) id ad; // @synthesize ad=_ad;
- (void).cxx_destruct;
- (void)reset;
- (_Bool)show:(id)arg1;
- (void)layout:(id)arg1;
- (void)update:(id)arg1;
- (id)init:(id)arg1 inAd:(id)arg2;

@end

