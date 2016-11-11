/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>

@class NSString, UIViewController, UIWindow;

__attribute__((visibility("hidden")))
@interface ScreenManagerImpl : NSObject {
	UIViewController* loadingViewController;
	UIWindow* appWindow;
	UIViewController* activeController;
	bool applyAnimationTransition;
	int transition;
	bool applyAnimationTransition2;
	NSString* type;
	NSString* subtype;
	bool inTransition;
	UIViewController* lastActiveController;
}
+(id)instance;
-(void)animationDidStop:(id)animation finished:(id)finished context:(void*)context;
-(void)animationDidStop:(id)animation finished:(BOOL)finished;
-(void)animationDidStart:(id)animation;
-(void)setViewController:(id)controller;
-(void)setViewControllerByTimer:(id)timer;
-(void)notimerSetViewController:(id)controller;
-(void)dealloc;
-(void)applicationLaunched:(id)launched;
-(id)init;
@end
