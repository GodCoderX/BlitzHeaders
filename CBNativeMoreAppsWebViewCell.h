/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "wotblitz-Structs.h"
#import "UIWebViewDelegate.h"
#import <UIKit/UITableViewCell.h>
#import "CBNativeMoreAppsTableViewCellProtocol.h"

@class NSString, UIWebView;

@interface CBNativeMoreAppsWebViewCell : UITableViewCell <UIWebViewDelegate, CBNativeMoreAppsTableViewCellProtocol> {
	id _clickCallback;
	UIWebView* _webView;
}
@property(copy) id clickCallback;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) UIWebView* webView;
+(float)height;
-(void).cxx_destruct;
-(BOOL)webView:(id)view shouldStartLoadWithRequest:(id)request navigationType:(int)type;
-(void)drawRect:(CGRect)rect;
-(void)prepareWithCellMeta:(id)cellMeta;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
@end

