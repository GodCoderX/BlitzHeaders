//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface BackgroundView : UIView
{
    struct NativeViewPool<UIWebView> webViewPool;
    struct NativeViewPool<UITextFieldHolder> textFieldPool;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)ReleaseTextField:(id)arg1;
- (void)ReleaseWebView:(id)arg1;
- (id)CreateTextField;
- (id)CreateWebView;
- (id)PrepareView:(id)arg1;

@end

