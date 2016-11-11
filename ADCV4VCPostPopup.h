/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ADCViewElement.h"

@class NSString, UILabel, UIView, UIImageView;

@interface ADCV4VCPostPopup : ADCViewElement {
	UIView* _background;
	UIImageView* _background_logo;
	int _background_logo_width;
	int _background_logo_height;
	int _background_logo_scale;
	UILabel* _label_view;
	NSString* _label_reward;
	NSString* _label_fraction;
	NSString* _label_rgba;
	NSString* _label_shadow_rgba;
	UIView* _dialog;
	UIImageView* _dialog_background;
	UIImageView* _dialog_logo;
	int _dialog_logo_width;
	int _dialog_logo_height;
	int _dialog_logo_scale;
	id _ad;
}
@property(assign, nonatomic) id ad;
-(void).cxx_destruct;
-(void)reset;
-(BOOL)show:(id)show;
-(void)layout:(id)layout;
-(void)update:(id)update;
-(id)init:(id)init inAd:(id)ad;
@end

