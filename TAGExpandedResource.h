/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>

@class NSString, NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface TAGExpandedResource : NSObject {
	NSArray* _rules;
	NSString* _version;
	int _resourceFormatVersion;
	NSDictionary* _macros;
}
@property(readonly, retain, nonatomic) NSDictionary* macros;
@property(readonly, assign, nonatomic) int resourceFormatVersion;
@property(readonly, copy, nonatomic) NSString* version;
@property(readonly, retain, nonatomic) NSArray* rules;
+(id)builder;
-(void).cxx_destruct;
-(id)description;
-(id)allMacros;
-(id)macrosByName:(id)name;
-(id)initWithRules:(id)rules macros:(id)macros version:(id)version resourceFormatVersion:(int)version4;
@end
