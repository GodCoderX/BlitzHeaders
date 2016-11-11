/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "wotblitz-Structs.h"
#import "CBAFHTTPResponseSerializer.h"

@class NSArray;

@interface CBAFCompoundResponseSerializer : CBAFHTTPResponseSerializer {
	NSArray* _responseSerializers;
}
@property(copy, nonatomic) NSArray* responseSerializers;
+(id)compoundSerializerWithResponseSerializers:(id)responseSerializers;
-(void).cxx_destruct;
-(id)copyWithZone:(NSZone*)zone;
-(void)encodeWithCoder:(id)coder;
-(id)initWithCoder:(id)coder;
-(id)responseObjectForResponse:(id)response data:(id)data error:(id*)error;
@end

