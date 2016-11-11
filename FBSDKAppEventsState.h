/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>
#import "wotblitz-Structs.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSArray, NSString, NSMutableArray;

@interface FBSDKAppEventsState : NSObject <NSCopying, NSSecureCoding> {
	NSMutableArray* _mutableEvents;
	unsigned _numSkipped;
	NSString* _tokenString;
	NSString* _appID;
}
@property(readonly, copy) NSString* appID;
@property(readonly, copy) NSString* tokenString;
@property(readonly, assign) unsigned numSkipped;
@property(readonly, copy) NSArray* events;
+(BOOL)supportsSecureCoding;
-(void).cxx_destruct;
-(id)JSONStringForEvents:(BOOL)events;
-(BOOL)isCompatibleWithTokenString:(id)tokenString appID:(id)anId;
-(BOOL)isCompatibleWithAppEventsState:(id)appEventsState;
-(BOOL)areAllEventsImplicit;
-(void)addEvent:(id)event isImplicit:(BOOL)implicit;
-(void)addEventsFromAppEventState:(id)appEventState;
-(void)encodeWithCoder:(id)coder;
-(id)initWithCoder:(id)coder;
-(id)copyWithZone:(NSZone*)zone;
-(id)initWithToken:(id)token appID:(id)anId;
-(id)init;
@end

