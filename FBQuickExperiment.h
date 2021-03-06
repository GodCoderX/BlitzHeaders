//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface FBQuickExperiment : NSObject
{
    NSString *_name;
    NSString *_group;
    NSDictionary *_parameters;
}

+ (id)findQuickExperimentWithName:(id)arg1 inArray:(id)arg2;
+ (id)quickExperimentsFromDictionaries:(id)arg1;
+ (id)getParameter:(id)arg1 fromExperiment:(id)arg2 withDefault:(id)arg3;
@property(retain, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(retain, nonatomic) NSString *group; // @synthesize group=_group;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)getNumberParameter:(id)arg1 withDefault:(id)arg2;
- (id)getStringParameter:(id)arg1 withDefault:(id)arg2;
- (id)getParameter:(id)arg1 withDefault:(id)arg2;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end

