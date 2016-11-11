/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface GAIRequestBuilder : NSObject {
	NSString* userAgent_;
}
@property(copy, nonatomic) NSString* userAgent;
-(id)requestGetUrl:(id)url payload:(id)payload;
-(id)requestPostUrl:(id)url payload:(id)payload compression:(unsigned)compression;
-(id)baseRequest;
-(id)parametersForHit:(id)hit;
-(id)parameterValueToString:(id)string;
-(id)encodeParameters:(id)parameters;
-(id)encodeParameter:(id)parameter withValue:(id)value;
-(void)dealloc;
-(id)init;
@end

