/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "TAGPBGeneratedMessage.h"

@class TAGPBMutableArray;

__attribute__((visibility("hidden")))
@interface TAGPServingValue : TAGPBGeneratedMessage {
}
@property(assign, nonatomic) int tagReference;
@property(assign, nonatomic) BOOL hasTagReference;
@property(assign, nonatomic) int macroNameReference;
@property(assign, nonatomic) BOOL hasMacroNameReference;
@property(retain, nonatomic) TAGPBMutableArray* templateTokenArray;
@property(assign, nonatomic) BOOL hasTemplateTokenArray;
@property(assign, nonatomic) int macroReference;
@property(assign, nonatomic) BOOL hasMacroReference;
@property(retain, nonatomic) TAGPBMutableArray* mapValueArray;
@property(assign, nonatomic) BOOL hasMapValueArray;
@property(retain, nonatomic) TAGPBMutableArray* mapKeyArray;
@property(assign, nonatomic) BOOL hasMapKeyArray;
@property(retain, nonatomic) TAGPBMutableArray* listItemArray;
@property(assign, nonatomic) BOOL hasListItemArray;
+(id)descriptor;
@end

