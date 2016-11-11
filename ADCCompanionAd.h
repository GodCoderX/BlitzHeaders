/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ADCViewElement.h"

@class UIImageView, NSDate;

@interface ADCCompanionAd : ADCViewElement {
	BOOL enabled_;
	double delay;
	UIImageView* background;
	BOOL native_enabled;
	double display_time;
	NSDate* last_display_time_update;
	BOOL dissolve;
	double dissolve_delay;
	BOOL started_dissolve;
	BOOL prevent_dissolve;
	BOOL _enabled;
	id _ad;
}
@property(readonly, assign, nonatomic) BOOL enabled;
@property(assign, nonatomic) id ad;
+(BOOL)isHTML5:(id)a5;
-(void).cxx_destruct;
-(void)reset;
-(BOOL)show:(id)show;
-(void)layout:(id)layout;
-(void)update:(id)update;
-(void)setAlpha:(double)alpha;
-(void)trackDisplayTime;
-(void)prepare_html5:(id)a5;
-(BOOL)ready;
-(void)willHideEndCard;
-(id)init:(id)init inAd:(id)ad;
@end
