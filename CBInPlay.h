//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CBInPlayManager, NSData, NSDictionary, NSString;

@interface CBInPlay : NSObject
{
    int _inPlayState;
    NSString *_location;
    NSData *_appIcon;
    NSString *_appName;
    NSDictionary *_metaData;
    CBInPlayManager *_inPlayManager;
}

@property(nonatomic) __weak CBInPlayManager *inPlayManager; // @synthesize inPlayManager=_inPlayManager;
@property(nonatomic) int inPlayState; // @synthesize inPlayState=_inPlayState;
@property(retain, nonatomic) NSDictionary *metaData; // @synthesize metaData=_metaData;
@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(retain, nonatomic) NSData *appIcon; // @synthesize appIcon=_appIcon;
@property(retain, nonatomic) NSString *location; // @synthesize location=_location;
- (void).cxx_destruct;
- (void)clearCache;
- (void)click;
- (void)show;
- (id)init;

@end

