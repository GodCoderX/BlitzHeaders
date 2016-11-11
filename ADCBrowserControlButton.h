/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ADCViewElement.h"

@class UIButton, NSString, UIView, UIImageView;

@interface ADCBrowserControlButton : ADCViewElement {
	BOOL _enabled;
	UIButton* _button;
	NSString* _click_action;
	NSString* _click_action_type;
	UIImageView* _glow;
	UIView* _owner;
	int _position;
	id _ad;
}
@property(assign, nonatomic) id ad;
-(void).cxx_destruct;
-(void)freePlaybackResources;
-(void)setVisible:(BOOL)visible;
-(void)not_dimmed;
-(void)dimmed;
-(void)setGlow:(id)glow;
-(void)buttonUp:(id)up;
-(void)buttonDown:(id)down;
-(void)buttonPushed:(id)pushed;
-(void)update:(id)update;
-(BOOL)show:(id)show;
-(void)layout:(id)layout;
-(id)init:(id)init inAd:(id)ad withPosition:(int)position;
@end
