//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSFileManager, NSURL;

@interface FBSDKAudioResourceLoader : NSObject
{
    NSFileManager *_fileManager;
    NSURL *_fileURL;
    unsigned int _systemSoundID;
}

+ (id)sharedLoader;
- (void).cxx_destruct;
- (id)_fileURL:(id *)arg1;
- (void)playSound;
- (_Bool)loadSound:(id *)arg1;
- (void)dealloc;
- (id)init;

@end

