/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"

@class NSString;

@protocol GAITracker <NSObject>
@property(assign, nonatomic) BOOL allowIDFACollection;
@property(readonly, assign, nonatomic) NSString* name;
-(void)send:(id)send;
-(id)get:(id)get;
-(void)set:(id)set value:(id)value;
@end
