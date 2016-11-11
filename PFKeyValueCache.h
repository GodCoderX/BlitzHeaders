/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>

@class NSString, NSDate, NSMutableArray, NSFileManager, NSCache, NSURL;
@protocol OS_dispatch_queue;

@interface PFKeyValueCache : NSObject {
	NSURL* _cacheDirectoryURL;
	NSObject<OS_dispatch_queue>* _diskCacheQueue;
	NSDate* _lastDiskCacheModDate;
	unsigned _lastDiskCacheSize;
	NSMutableArray* _lastDiskCacheAttributes;
	NSFileManager* _fileManager;
	NSCache* _memoryCache;
	unsigned _maxDiskCacheBytes;
	unsigned _maxDiskCacheRecords;
	unsigned _maxMemoryCacheBytesPerRecord;
}
@property(assign, nonatomic) unsigned maxMemoryCacheBytesPerRecord;
@property(assign, nonatomic) unsigned maxDiskCacheRecords;
@property(assign, nonatomic) unsigned maxDiskCacheBytes;
@property(retain, nonatomic) NSCache* memoryCache;
@property(retain, nonatomic) NSFileManager* fileManager;
@property(readonly, copy, nonatomic) NSString* cacheDirectoryPath;
-(void).cxx_destruct;
-(void)_compactDiskCache;
-(void)_addToDiskCacheDictionary:(id)diskCacheDictionary modificationDate:(id)date size:(unsigned)size;
-(void)_recreateDiskCache;
-(void)_invalidateDiskCache;
-(BOOL)_isDiskCacheDirty;
-(void)_createDiskCacheEntry:(id)entry atURL:(id)url;
-(id)_diskCacheEntryForURL:(id)url;
-(id)_modificationDateOfCacheEntryAtURL:(id)url;
-(void)_updateModificationDateAtURL:(id)url;
-(id)_cacheURLForKey:(id)key;
-(void)waitForOutstandingOperations;
-(void)removeAllObjects;
-(void)removeObjectForKey:(id)key;
-(id)objectForKey:(id)key maxAge:(double)age;
-(void)setObject:(id)object forKey:(id)key;
-(void)setObject:(id)object forKeyedSubscript:(id)keyedSubscript;
-(id)initWithCacheDirectoryURL:(id)cacheDirectoryURL fileManager:(id)manager memoryCache:(id)cache;
-(id)initWithCacheDirectoryPath:(id)cacheDirectoryPath;
-(id)init;
@end

