//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBAFHTTPRequestSerializer.h"

@interface CBAFJSONRequestSerializer : CBAFHTTPRequestSerializer
{
    unsigned long long _writingOptions;
}

+ (id)serializerWithWritingOptions:(unsigned long long)arg1;
+ (id)serializer;
@property(nonatomic) unsigned long long writingOptions; // @synthesize writingOptions=_writingOptions;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)requestBySerializingRequest:(id)arg1 withParameters:(id)arg2 error:(id *)arg3;

@end

