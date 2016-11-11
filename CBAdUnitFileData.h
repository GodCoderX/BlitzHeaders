/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>

@class NSString, NSDate;

@interface CBAdUnitFileData : NSObject {
	NSString* _ID;
	NSString* _type;
	NSString* _folder;
	NSString* _URLString;
	unsigned _state;
	unsigned _failures;
	int _priority;
	NSDate* _lastModified;
	unsigned long long _bytes;
}
@property(retain, nonatomic) NSDate* lastModified;
@property(assign, nonatomic) unsigned long long bytes;
@property(assign, nonatomic) int priority;
@property(assign, nonatomic) unsigned failures;
@property(assign, nonatomic) unsigned state;
@property(retain, nonatomic) NSString* URLString;
@property(retain, nonatomic) NSString* folder;
@property(retain, nonatomic) NSString* type;
@property(retain, nonatomic) NSString* ID;
-(void).cxx_destruct;
-(void)downloadFail;
-(void)downloadSuccess;
-(BOOL)failed;
-(BOOL)exists;
-(void)setAgeToNow;
-(void)setAgeToLastModified;
-(void)setSize;
-(id)initWithExistingFile:(id)existingFile type:(id)type;
-(id)initWithCategoryResponse:(id)categoryResponse category:(id)category;
-(id)initWithResponse:(id)response;
@end
