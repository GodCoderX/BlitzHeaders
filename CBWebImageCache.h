/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>
#import "wotblitz-Structs.h"


@interface CBWebImageCache : NSObject {
}
+(id)sharedCache;
-(void)removeExpiredImages;
-(void)ensureExistenceOfLocalImageCache;
-(id)cachedImageSynchronized:(id)synchronized imageNamedCache:(id)cache;
-(id)locallyCachedImageForChecksum:(id)checksum;
-(id)fetchAndCacheImageWithURL:(id)url checksum:(id)checksum;
-(void)loadImageWithURL:(id)url checksum:(id)checksum callback:(id)callback group:(dispatch_group_s*)group;
@end

