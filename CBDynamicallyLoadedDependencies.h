/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>
#import "wotblitz-Structs.h"

@class NSMutableDictionary;

@interface CBDynamicallyLoadedDependencies : NSObject {
	NSMutableDictionary* _libraryMap;
	NSMutableDictionary* _symbolMap;
}
@property(retain) NSMutableDictionary* symbolMap;
@property(retain) NSMutableDictionary* libraryMap;
+(id)buildFrameworkPath:(id)path;
+(id)loadStringConstant:(id)constant withFramework:(id)framework;
+(void*)loadSymbol:(id)symbol withFramework:(id)framework;
+(Class)loadClass:(id)aClass withFramework:(id)framework;
+(id)allocWithZone:(NSZone*)zone;
+(id)shared;
+(void)initialize;
-(void).cxx_destruct;
-(void*)openLibrary:(id)library;
-(void*)loadSymbol:(id)symbol symbolName:(id)name;
-(void*)loadSymbol:(id)symbol withFramework:(id)framework;
-(Class)loadClass:(id)aClass withFramework:(id)framework;
-(id)loadStringConstant:(id)constant withFramework:(id)framework;
-(id)init;
-(id)copyWithZone:(NSZone*)zone;
@end

