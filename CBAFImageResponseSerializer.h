/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "wotblitz-Structs.h"
#import "CBAFHTTPResponseSerializer.h"


@interface CBAFImageResponseSerializer : CBAFHTTPResponseSerializer {
	BOOL _automaticallyInflatesResponseImage;
	float _imageScale;
}
@property(assign, nonatomic) BOOL automaticallyInflatesResponseImage;
@property(assign, nonatomic) float imageScale;
-(id)copyWithZone:(NSZone*)zone;
-(void)encodeWithCoder:(id)coder;
-(id)initWithCoder:(id)coder;
-(id)responseObjectForResponse:(id)response data:(id)data error:(id*)error;
-(id)init;
@end

