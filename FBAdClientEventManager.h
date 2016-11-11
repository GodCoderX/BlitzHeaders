/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>


@interface FBAdClientEventManager : NSObject {
}
+(id)createEventName:(id)name withEventData:(id)eventData withRequestId:(id)requestId;
+(id)createEventName:(id)name withEventData:(id)eventData;
+(id)createErrorEventWithFormat:(id)format;
+(id)createErrorEventWithMessage:(id)message;
+(id)createErrorEventWithException:(id)exception;
+(id)dumpClientEventsToJson;
+(void)addClientEvent:(id)event;
+(void)initialize;
@end

