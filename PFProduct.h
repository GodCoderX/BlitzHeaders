/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "PFObject.h"
#import "PFSubclassing.h"

@class NSString, NSDecimalNumber, NSLocale, NSNumber, PFFile;

@interface PFProduct : PFObject <PFSubclassing> {
	NSDecimalNumber* price;
	NSLocale* priceLocale;
	int progress;
	NSString* contentPath;
}
@property(retain, nonatomic) NSString* contentPath;
@property(assign, nonatomic) int progress;
@property(retain, nonatomic) NSLocale* priceLocale;
@property(retain, nonatomic) NSDecimalNumber* price;
@property(readonly, assign, nonatomic) NSString* downloadName;
@property(retain, nonatomic) NSNumber* order;
@property(retain, nonatomic) NSString* subtitle;
@property(retain, nonatomic) NSString* title;
@property(retain, nonatomic) PFFile* icon;
@property(retain, nonatomic) NSString* productIdentifier;
+(id)parseClassName;
+(void)_assertValidInstanceClassName:(id)name;
-(void).cxx_destruct;
@end

