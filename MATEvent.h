/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>

@class NSDate, NSString, NSArray, NSData;

@interface MATEvent : NSObject {
	BOOL _postConversion;
	NSString* _eventName;
	int _eventId;
	NSArray* _eventItems;
	float _revenue;
	NSString* _currencyCode;
	NSString* _refId;
	NSData* _receipt;
	NSString* _contentType;
	NSString* _contentId;
	NSString* _searchString;
	int _transactionState;
	float _rating;
	int _level;
	unsigned _quantity;
	NSDate* _date1;
	NSDate* _date2;
	NSString* _attribute1;
	NSString* _attribute2;
	NSString* _attribute3;
	NSString* _attribute4;
	NSString* _attribute5;
	NSString* _actionName;
}
@property(assign, nonatomic) BOOL postConversion;
@property(readonly, copy, nonatomic) NSString* actionName;
@property(copy, nonatomic) NSString* attribute5;
@property(copy, nonatomic) NSString* attribute4;
@property(copy, nonatomic) NSString* attribute3;
@property(copy, nonatomic) NSString* attribute2;
@property(copy, nonatomic) NSString* attribute1;
@property(retain, nonatomic) NSDate* date2;
@property(retain, nonatomic) NSDate* date1;
@property(assign, nonatomic) unsigned quantity;
@property(assign, nonatomic) int level;
@property(assign, nonatomic) float rating;
@property(assign, nonatomic) int transactionState;
@property(copy, nonatomic) NSString* searchString;
@property(copy, nonatomic) NSString* contentId;
@property(copy, nonatomic) NSString* contentType;
@property(copy, nonatomic) NSData* receipt;
@property(copy, nonatomic) NSString* refId;
@property(copy, nonatomic) NSString* currencyCode;
@property(assign, nonatomic) float revenue;
@property(copy, nonatomic) NSArray* eventItems;
@property(readonly, assign, nonatomic) int eventId;
@property(copy, nonatomic) NSString* eventName;
+(id)actionNameForEvent:(id)event;
+(id)eventWithId:(int)anId;
+(id)eventWithName:(id)name;
-(void).cxx_destruct;
-(id)initWithEventId:(int)eventId;
-(id)initWithEventName:(id)eventName;
-(id)init;
@end

