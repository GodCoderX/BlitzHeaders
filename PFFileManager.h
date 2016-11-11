/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>

@class NSString;

@interface PFFileManager : NSObject {
	NSString* _applicationIdentifier;
	NSString* _applicationGroupIdentifier;
}
@property(copy, nonatomic) NSString* applicationGroupIdentifier;
@property(copy, nonatomic) NSString* applicationIdentifier;
+(BOOL)_skipBackupOnPath:(id)path;
+(id)removeItemAtPathAsync:(id)pathAsync withFileLock:(BOOL)fileLock;
+(id)removeItemAtPathAsync:(id)pathAsync;
+(id)removeDirectoryContentsAsyncAtPath:(id)path;
+(id)moveContentsOfDirectoryAsyncAtPath:(id)path toDirectoryAtPath:(id)path2 executor:(id)executor;
+(id)moveItemAsyncAtPath:(id)path toPath:(id)path2;
+(id)copyItemAsyncAtPath:(id)path toPath:(id)path2;
+(id)createDirectoryIfNeededAsyncAtPath:(id)path withOptions:(unsigned char)options executor:(id)executor;
+(id)createDirectoryIfNeededAsyncAtPath:(id)path;
+(id)writeDataAsync:(id)async toFile:(id)file;
+(id)writeStringAsync:(id)async toFile:(id)file;
+(BOOL)isApplicationGroupContainerReachableForGroupIdentifier:(id)groupIdentifier;
-(void).cxx_destruct;
-(id)parseCacheItemPathForPathComponent:(id)pathComponent;
-(id)parseDataItemPathForPathComponent:(id)pathComponent;
-(id)parseDataDirectoryPath_DEPRECATED;
-(id)parseLocalSandboxDataDirectoryPath;
-(id)parseDefaultDataDirectoryPath;
-(id)initWithApplicationIdentifier:(id)applicationIdentifier applicationGroupIdentifier:(id)identifier;
-(id)init;
@end

