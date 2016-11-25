//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PFURLSessionDataTaskDelegate.h"

@class NSOutputStream, NSString;

@interface PFURLSessionFileDownloadTaskDelegate : PFURLSessionDataTaskDelegate
{
    NSOutputStream *_fileDataOutputStream;
    CDUnknownBlockType _progressBlock;
    NSString *_targetFilePath;
}

+ (id)taskDelegateForDataTask:(id)arg1 withCancellationToken:(id)arg2 targetFilePath:(id)arg3 progressBlock:(CDUnknownBlockType)arg4;
@property(readonly, copy, nonatomic) NSString *targetFilePath; // @synthesize targetFilePath=_targetFilePath;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)_taskDidFinish;
- (id)dataOutputStream;
- (void)_reportProgress;
- (id)initForDataTask:(id)arg1 withCancellationToken:(id)arg2 targetFilePath:(id)arg3 progressBlock:(CDUnknownBlockType)arg4;

@end

