/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>

@class FBAdCache, NSURL;
@protocol OS_dispatch_queue;

@interface FBPlaceholderObject : NSObject {
	NSObject<OS_dispatch_queue>* _underlyingQueue;
	id _key;
	NSURL* _url;
	FBAdCache* _cache;
	int _fetchType;
}
@property(assign, nonatomic) int fetchType;
@property(assign, nonatomic) __weak FBAdCache* cache;
@property(copy, nonatomic) NSURL* url;
@property(retain, nonatomic) id key;
@property(retain, nonatomic) NSObject<OS_dispatch_queue>* underlyingQueue;
-(void).cxx_destruct;
-(void)dealloc;
-(void)fetchResource;
-(void)addCallback:(id)callback;
-(id)initWithKey:(id)key withURL:(id)url withFetchType:(int)fetchType withCache:(id)cache;
@end

