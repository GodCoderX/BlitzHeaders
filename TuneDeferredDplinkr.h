/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>

@class NSString, NSOperationQueue;
@protocol TuneDelegate;

@interface TuneDeferredDplinkr : NSObject {
	BOOL _adTrackingEnabled;
	NSOperationQueue* _deeplinkOpQueue;
	NSString* _advertiserId;
	NSString* _conversionKey;
	id<TuneDelegate> _delegate;
	id<TuneDelegate> _deeplinkDelegate;
	NSString* _bundleId;
	NSString* _ifa;
}
@property(assign, nonatomic) BOOL adTrackingEnabled;
@property(copy, nonatomic) NSString* ifa;
@property(copy, nonatomic) NSString* bundleId;
@property(assign, nonatomic) id<TuneDelegate> deeplinkDelegate;
@property(assign, nonatomic) id<TuneDelegate> delegate;
@property(copy, nonatomic) NSString* conversionKey;
@property(copy, nonatomic) NSString* advertiserId;
@property(retain, nonatomic) NSOperationQueue* deeplinkOpQueue;
+(void)checkForDeferredDeeplink:(id)deferredDeeplink;
+(void)setIfa:(id)ifa trackingEnabled:(BOOL)enabled;
+(void)setPackageName:(id)name;
+(void)setDelegate:(id)delegate;
+(void)setAdvertiserId:(id)anId conversionKey:(id)key;
+(void)initialize;
-(void).cxx_destruct;
-(id)init;
@end

