/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>


@interface FBAdLogger : NSObject {
}
+(id)levelAsString:(int)string;
+(void)logAtLevel:(int)level file:(const char*)file lineNumber:(int)number format:(id)format;
+(void)setLogLevel:(int)level;
+(int)getLogLevel;
@end
