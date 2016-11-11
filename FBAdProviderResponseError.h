/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "FBAdProviderResponse.h"

@class FBAdPlacementDefinition, NSString;

@interface FBAdProviderResponseError : FBAdProviderResponse {
	NSString* _errorMessage;
	int _errorCode;
	FBAdPlacementDefinition* _adPlacementDefinition;
}
@property(retain, nonatomic) FBAdPlacementDefinition* adPlacementDefinition;
@property(assign, nonatomic) int errorCode;
@property(retain, nonatomic) NSString* errorMessage;
-(void).cxx_destruct;
-(id)initWithErrorMessage:(id)errorMessage withErrorCode:(int)errorCode withPlacementDefinition:(id)placementDefinition;
@end
