/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>
#import "wotblitz-Structs.h"

@class NSString, NSData;

@interface FABIcon : NSObject {
	BOOL _prerendered;
	NSData* _data;
	NSString* _dataHash;
	CGSize _size;
}
@property(readonly, assign, nonatomic) BOOL isWithinMaxSurfaceArea;
@property(readonly, assign, nonatomic) float surfaceArea;
@property(assign, nonatomic) BOOL prerendered;
@property(assign, nonatomic) CGSize size;
@property(copy, nonatomic) NSString* dataHash;
@property(copy, nonatomic) NSData* data;
+(BOOL)isWithinMaxSurfaceAreaWithImage:(id)image;
-(void).cxx_destruct;
-(BOOL)largerThanSize:(CGSize)size;
-(id)initWithPNGImageAtPath:(id)path size:(CGSize)size prerendered:(BOOL)prerendered;
-(id)initWithData:(id)data size:(CGSize)size;
-(id)initWithData:(id)data size:(CGSize)size prerendered:(BOOL)prerendered;
-(id)initWithData:(id)data dataHash:(id)hash size:(CGSize)size prerendered:(BOOL)prerendered;
@end

