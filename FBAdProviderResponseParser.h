//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FBAdProviderResponseParser : NSObject
{
    CDUnknownBlockType _onParseSuccess;
    CDUnknownBlockType _onParseError;
}

@property(copy, nonatomic) CDUnknownBlockType onParseError; // @synthesize onParseError=_onParseError;
@property(copy, nonatomic) CDUnknownBlockType onParseSuccess; // @synthesize onParseSuccess=_onParseSuccess;
- (void).cxx_destruct;
- (void)parseResponseFromData:(id)arg1 successHandler:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (id)parsePlacementDefinitionFromData:(id)arg1;

@end

