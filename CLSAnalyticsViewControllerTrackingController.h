/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>

@class NSMutableSet;
@protocol CLSAnalyticsViewControllerTrackingDelegate;

@interface CLSAnalyticsViewControllerTrackingController : NSObject {
	BOOL _isTracking;
	id<CLSAnalyticsViewControllerTrackingDelegate> _delegate;
	NSMutableSet* _blackListViewControllerClasses;
}
@property(assign, nonatomic) __weak id<CLSAnalyticsViewControllerTrackingDelegate> delegate;
+(BOOL)replaceMethodImplementationForClass:(Class)aClass selector:(SEL)selector withImplementation:(/*function-pointer*/ void*)implementation storingOldImplementation:(/*function-pointer*/ void**)implementation4;
+(id)sharedInstance;
-(void)cleanUpUIViewControllerSwizzle;
-(void)setUpUIViewControllerSwizzle;
-(BOOL)shouldLogViewController:(id)controller;
-(BOOL)isBlacklistedViewControllerClass:(Class)aClass;
-(void)removeBlackListViewControllerClass:(Class)aClass;
-(void)addBlackListViewControllerClass:(Class)aClass;
-(void)startTracking;
-(void)disposeSharedInstance;
-(id)init;
-(void)dealloc;
@end
