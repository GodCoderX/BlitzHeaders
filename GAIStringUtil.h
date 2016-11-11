/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>


__attribute__((visibility("hidden")))
@interface GAIStringUtil : NSObject {
}
+(id)stripLeadingAmpersand:(id)ampersand;
+(id)decodeParametersFromUrl:(id)url;
+(id)decodeParametersFromQuery:(id)query;
+(id)percentDecode:(id)decode;
+(id)percentEncode:(id)encode;
+(id)currencyMicrosString:(long long)string;
+(id)decimalString:(double)string decimals:(int)decimals;
+(id)uintString:(unsigned long long)string;
+(id)intString:(long long)string;
+(id)trim:(id)trim;
+(id)urlParams:(id)params;
-(id)init;
@end

