/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>
#import "PFPushInternalUtils.h"

@class NSString;

@interface PFPushUtilities : NSObject <PFPushInternalUtils> {
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
+(void)playVibrate;
+(void)playAudioWithName:(id)name;
+(void)showAlertViewWithTitle:(id)title message:(id)message;
+(void)clearDeviceToken;
+(id)getDeviceTokenFromKeychain;
+(id)convertDeviceTokenToString:(id)string;
@end

