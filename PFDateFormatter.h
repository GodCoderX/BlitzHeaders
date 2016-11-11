/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>
#import "wotblitz-Structs.h"

@class NSDateFormatter;
@protocol OS_dispatch_queue;

@interface PFDateFormatter : NSObject {
	NSObject<OS_dispatch_queue>* _synchronizationQueue;
	sqlite3* _sqliteDatabase;
	sqlite3_stmt* _stringToDateStatement;
	NSDateFormatter* _preciseDateFormatter;
}
@property(readonly, assign, nonatomic) NSDateFormatter* preciseDateFormatter;
+(id)sharedFormatter;
-(void).cxx_destruct;
-(id)dateFromString:(id)string;
-(id)preciseStringFromDate:(id)date;
-(void)dealloc;
-(id)init;
@end

