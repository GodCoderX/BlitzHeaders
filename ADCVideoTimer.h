/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "wotblitz-Structs.h"
#import <UIKit/UIView.h>

@class ADCShadowedLabel;

@interface ADCVideoTimer : UIView {
	ADCShadowedLabel* _label;
	double progress;
}
-(void).cxx_destruct;
-(void)drawRect:(CGRect)rect;
-(CGSize)sizeThatFits:(CGSize)fits;
-(void)update:(double)update withTotal:(double)total;
-(id)initWithFrame:(CGRect)frame;
@end

