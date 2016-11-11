/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "wotblitz-Structs.h"
#import <UIKit/UIView.h>

@class UIButton, UITapGestureRecognizer, BFAppLink, UILabel, UIColor;
@protocol BFAppLinkReturnToRefererViewDelegate;

@interface BFAppLinkReturnToRefererView : UIView {
	BOOL _explicitlyHidden;
	BOOL _closed;
	id<BFAppLinkReturnToRefererViewDelegate> _delegate;
	UIColor* _textColor;
	BFAppLink* _refererAppLink;
	unsigned _includeStatusBarInSize;
	UILabel* _labelView;
	UIButton* _closeButton;
	UITapGestureRecognizer* _insideTapGestureRecognizer;
	UIView* _viewToMoveWithNavController;
}
@property(retain, nonatomic) UIView* viewToMoveWithNavController;
@property(retain, nonatomic) UITapGestureRecognizer* insideTapGestureRecognizer;
@property(retain, nonatomic) UIButton* closeButton;
@property(retain, nonatomic) UILabel* labelView;
@property(assign, nonatomic) BOOL closed;
@property(assign, nonatomic) unsigned includeStatusBarInSize;
@property(retain, nonatomic) BFAppLink* refererAppLink;
@property(retain, nonatomic) UIColor* textColor;
@property(assign, nonatomic) __weak id<BFAppLinkReturnToRefererViewDelegate> delegate;
-(void).cxx_destruct;
-(void)updateHidden;
-(void)onTapInside:(id)inside;
-(void)closeButtonTapped:(id)tapped;
-(BOOL)hasRefererData;
-(id)localizedLabelForReferer:(id)referer;
-(id)drawCloseButtonImageWithColor:(id)color;
-(void)updateColors;
-(void)updateLabelText;
-(void)setHidden:(BOOL)hidden;
-(float)statusBarHeight;
-(CGSize)sizeThatFits:(CGSize)fits;
-(void)layoutSubviews;
-(CGSize)intrinsicContentSize;
-(void)initViews;
-(void)commonInit;
-(id)initWithCoder:(id)coder;
-(id)initWithFrame:(CGRect)frame;
@end

