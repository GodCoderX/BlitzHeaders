/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "TAGPBField.h"


__attribute__((visibility("hidden")))
@interface TAGPBMutableField : TAGPBField {
}
-(void)addGroup:(id)group;
-(void)addLengthDelimited:(id)delimited;
-(void)addFixed64:(unsigned long long)a64;
-(void)addFixed32:(unsigned)a32;
-(void)addVarint:(unsigned long long)varint;
-(void)mergeFromField:(id)field;
-(id)initWithNumber:(int)number;
@end
