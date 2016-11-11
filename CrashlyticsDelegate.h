/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol CrashlyticsDelegate <NSObject>
@optional
-(BOOL)crashlyticsCanUseBackgroundSessions:(id)sessions;
-(void)crashlyticsDidDetectReportForLastExecution:(id)crashlytics completionHandler:(id)handler;
-(void)crashlytics:(id)crashlytics didDetectCrashDuringPreviousExecution:(id)execution;
-(void)crashlyticsDidDetectCrashDuringPreviousExecution:(id)crashlytics;
@end

