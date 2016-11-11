/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>

@class NSFileManager, NSURL;

@interface FBSDKAudioResourceLoader : NSObject {
	NSFileManager* _fileManager;
	NSURL* _fileURL;
	unsigned long _systemSoundID;
}
+(id)sharedLoader;
+(id)data;
+(unsigned)version;
+(id)name;
-(void).cxx_destruct;
-(id)_fileURL:(id*)url;
-(void)playSound;
-(BOOL)loadSound:(id*)sound;
-(void)dealloc;
-(id)init;
@end
