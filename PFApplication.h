//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIApplication;

@interface PFApplication : NSObject
{
}

+ (id)currentApplication;
@property(readonly, nonatomic) UIApplication *systemApplication;
@property(nonatomic) long long iconBadgeNumber;
@property(readonly, nonatomic, getter=isExtensionEnvironment) _Bool extensionEnvironment;
@property(readonly, nonatomic, getter=isAppStoreEnvironment) _Bool appStoreEnvironment;

@end

