//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CBWebImageCache : NSObject
{
}

+ (id)sharedCache;
- (void)removeExpiredImages;
- (void)ensureExistenceOfLocalImageCache;
- (id)cachedImageSynchronized:(id)arg1 imageNamedCache:(id)arg2;
- (id)locallyCachedImageForChecksum:(id)arg1;
- (id)fetchAndCacheImageWithURL:(id)arg1 checksum:(id)arg2;
- (void)loadImageWithURL:(id)arg1 checksum:(id)arg2 callback:(CDUnknownBlockType)arg3 group:(struct dispatch_group_s *)arg4;

@end

