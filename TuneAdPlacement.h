/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>

@class NSString, TuneAdMetadata, TuneAd;

@interface TuneAdPlacement : NSObject {
	TuneAd* _ad;
	NSString* _placement;
	TuneAdMetadata* _metadata;
}
@property(retain, nonatomic) TuneAdMetadata* metadata;
@property(copy, nonatomic) NSString* placement;
@property(retain, nonatomic) TuneAd* ad;
+(id)adPlacementWithPlacement:(id)placement metadata:(id)metadata;
+(id)adPlacementWithPlacement:(id)placement;
-(void).cxx_destruct;
@end

