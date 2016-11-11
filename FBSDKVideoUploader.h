/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>

@class NSString, NSNumberFormatter, NSNumber, NSDictionary, FBSDKShareVideo;
@protocol FBSDKVideoUploaderDelegate;

@interface FBSDKVideoUploader : NSObject {
	NSNumber* _videoID;
	NSNumber* _uploadSessionID;
	NSNumberFormatter* _numberFormatter;
	NSString* _graphPath;
	NSString* _videoName;
	unsigned _videoSize;
	FBSDKShareVideo* _video;
	NSDictionary* _parameters;
	NSString* _graphNode;
	id<FBSDKVideoUploaderDelegate> _delegate;
}
@property(assign, nonatomic) __weak id<FBSDKVideoUploaderDelegate> delegate;
@property(copy, nonatomic) NSString* graphNode;
@property(copy, nonatomic) NSDictionary* parameters;
@property(readonly, copy, nonatomic) FBSDKShareVideo* video;
-(void).cxx_destruct;
-(id)_graphPathWithSuffix:(id)suffix;
-(id)numberFormatter;
-(id)_extractOffsetsFromResultDictionary:(id)resultDictionary;
-(void)_postFinishRequest;
-(void)_startTransferRequestWithOffsetDictionary:(id)offsetDictionary;
-(void)_postStartRequest;
-(void)start;
-(id)initWithVideoName:(id)videoName videoSize:(unsigned)size parameters:(id)parameters delegate:(id)delegate;
-(id)init;
@end
