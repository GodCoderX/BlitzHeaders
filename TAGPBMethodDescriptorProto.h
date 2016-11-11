/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "TAGPBGeneratedMessage.h"

@class NSString, TAGPBMethodOptions;

__attribute__((visibility("hidden")))
@interface TAGPBMethodDescriptorProto : TAGPBGeneratedMessage {
}
@property(assign, nonatomic) BOOL serverStreaming;
@property(assign, nonatomic) BOOL hasServerStreaming;
@property(assign, nonatomic) BOOL clientStreaming;
@property(assign, nonatomic) BOOL hasClientStreaming;
@property(retain, nonatomic) TAGPBMethodOptions* options;
@property(assign, nonatomic) BOOL hasOptions;
@property(retain, nonatomic) NSString* outputType;
@property(assign, nonatomic) BOOL hasOutputType;
@property(retain, nonatomic) NSString* inputType;
@property(assign, nonatomic) BOOL hasInputType;
@property(retain, nonatomic) NSString* name;
@property(assign, nonatomic) BOOL hasName;
+(id)descriptor;
@end

