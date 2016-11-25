//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface CBDynamicallyLoadedDependencies : NSObject
{
    NSMutableDictionary *_libraryMap;
    NSMutableDictionary *_symbolMap;
}

+ (id)buildFrameworkPath:(id)arg1;
+ (id)loadStringConstant:(id)arg1 withFramework:(id)arg2;
+ (void *)loadSymbol:(id)arg1 withFramework:(id)arg2;
+ (Class)loadClass:(id)arg1 withFramework:(id)arg2;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)shared;
+ (void)initialize;
@property(retain) NSMutableDictionary *symbolMap; // @synthesize symbolMap=_symbolMap;
@property(retain) NSMutableDictionary *libraryMap; // @synthesize libraryMap=_libraryMap;
- (void).cxx_destruct;
- (void *)openLibrary:(id)arg1;
- (void *)loadSymbol:(id)arg1 symbolName:(id)arg2;
- (void *)loadSymbol:(id)arg1 withFramework:(id)arg2;
- (Class)loadClass:(id)arg1 withFramework:(id)arg2;
- (id)loadStringConstant:(id)arg1 withFramework:(id)arg2;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

