//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "CBNativeMoreAppsTableViewCellProtocol.h"
#import "UIWebViewDelegate.h"

@class NSString, UIWebView;

@interface CBNativeMoreAppsWebViewCell : UITableViewCell <UIWebViewDelegate, CBNativeMoreAppsTableViewCellProtocol>
{
    CDUnknownBlockType _clickCallback;
    UIWebView *_webView;
}

+ (double)height;
@property(retain, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
@property(copy) CDUnknownBlockType clickCallback; // @synthesize clickCallback=_clickCallback;
- (void).cxx_destruct;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)drawRect:(struct CGRect)arg1;
- (void)prepareWithCellMeta:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

