/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "wotblitz-Structs.h"
#import <UIKit/UITableViewCell.h>
#import "CBNativeMoreAppsTableViewCellProtocol.h"

@class NSString, UIButton, UIImageView, CBActionWrapper;

@interface CBNativeMoreAppsFeaturedCell : UITableViewCell <CBNativeMoreAppsTableViewCellProtocol> {
	id _clickCallback;
	CBActionWrapper* _clickWrapper;
	UIButton* _containerButton;
	UIImageView* _cellImageView;
}
@property(copy) id clickCallback;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) UIImageView* cellImageView;
@property(retain, nonatomic) UIButton* containerButton;
@property(retain, nonatomic) CBActionWrapper* clickWrapper;
+(float)height;
-(void).cxx_destruct;
-(void)drawRect:(CGRect)rect;
-(void)prepareWithCellMeta:(id)cellMeta;
-(void)layoutSubviews;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
@end
