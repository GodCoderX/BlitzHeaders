/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "TAGPBGeneratedMessage.h"

@class NSString, TAGPBMutableArray, TAGPResource;

__attribute__((visibility("hidden")))
@interface TAGPSupplementedResource : TAGPBGeneratedMessage {
}
@property(retain, nonatomic) NSString* fingerprint;
@property(assign, nonatomic) BOOL hasFingerprint;
@property(retain, nonatomic) TAGPResource* resource;
@property(assign, nonatomic) BOOL hasResource;
@property(retain, nonatomic) TAGPBMutableArray* supplementalArray;
@property(assign, nonatomic) BOOL hasSupplementalArray;
+(id)descriptor;
@end
