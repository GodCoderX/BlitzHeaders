/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>
#import "TAGPBMessageSignatureProtocol.h"


@protocol TAGPBMessageSignatureProtocol
@optional
+(id)getClassValue;
-(id)mergeClass:(id)aClass;
-(id)setClassBuilder:(id)builder;
-(id)setArray:(id)array;
-(id)getArray;
-(int)getEnumAtIndex:(unsigned)index;
-(id)setEnum:(int)anEnum;
-(int)getEnum;
-(id)getGroupAtIndex:(unsigned)index;
-(id)setGroup:(id)group;
-(id)getGroup;
-(id)getMessageAtIndex:(unsigned)index;
-(id)setMessage:(id)message;
-(id)getMessage;
-(id)getStringAtIndex:(unsigned)index;
-(id)setString:(id)string;
-(id)getString;
-(id)getDataAtIndex:(unsigned)index;
-(id)setData:(id)data;
-(id)getData;
-(unsigned long long)getUInt64AtIndex:(unsigned)index;
-(id)setUInt64:(unsigned long long)a64;
-(unsigned long long)getUInt64;
-(unsigned)getUInt32AtIndex:(unsigned)index;
-(id)setUInt32:(unsigned)a32;
-(unsigned)getUInt32;
-(long long)getSInt64AtIndex:(unsigned)index;
-(id)setSInt64:(long long)a64;
-(long long)getSInt64;
-(int)getSInt32AtIndex:(unsigned)index;
-(id)setSInt32:(int)a32;
-(int)getSInt32;
-(long long)getInt64AtIndex:(unsigned)index;
-(id)setInt64:(long long)a64;
-(long long)getInt64;
-(int)getInt32AtIndex:(unsigned)index;
-(id)setInt32:(int)a32;
-(int)getInt32;
-(double)getDoubleAtIndex:(unsigned)index;
-(id)setDouble:(double)aDouble;
-(double)getDouble;
-(long long)getSFixed64AtIndex:(unsigned)index;
-(id)setSFixed64:(long long)a64;
-(long long)getSFixed64;
-(unsigned long long)getFixed64AtIndex:(unsigned)index;
-(id)setFixed64:(unsigned long long)a64;
-(unsigned long long)getFixed64;
-(float)getFloatAtIndex:(unsigned)index;
-(id)setFloat:(float)aFloat;
-(float)getFloat;
-(int)getSFixed32AtIndex:(unsigned)index;
-(id)setSFixed32:(int)a32;
-(int)getSFixed32;
-(unsigned)getFixed32AtIndex:(unsigned)index;
-(id)setFixed32:(unsigned)a32;
-(unsigned)getFixed32;
-(BOOL)getBoolAtIndex:(unsigned)index;
-(id)setBool:(BOOL)aBool;
-(BOOL)getBool;
@end

__attribute__((visibility("hidden")))
@interface TAGPBMessageSignatureProtocol : NSObject <TAGPBMessageSignatureProtocol> {
}
@end
