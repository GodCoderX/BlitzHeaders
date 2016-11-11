/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "FBSDKURLConnectionDelegate.h"
#import "FBSDKGraphErrorRecoveryProcessorDelegate.h"
#import </libobjc.A.h>

@class NSHTTPURLResponse, NSMutableArray, FBSDKGraphRequestMetadata, FBSDKLogger, FBSDKURLConnection, NSString, NSOperationQueue, FBSDKGraphErrorRecoveryProcessor;
@protocol FBSDKGraphRequestConnectionDelegate;

@interface FBSDKGraphRequestConnection : NSObject <FBSDKURLConnectionDelegate, FBSDKGraphErrorRecoveryProcessorDelegate> {
	NSString* _overrideVersionPart;
	unsigned _expectingResults;
	NSOperationQueue* _delegateQueue;
	FBSDKGraphRequestMetadata* _recoveringRequestMetadata;
	FBSDKGraphErrorRecoveryProcessor* _errorRecoveryProcessor;
	id<FBSDKGraphRequestConnectionDelegate> _delegate;
	NSHTTPURLResponse* _URLResponse;
	FBSDKURLConnection* _connection;
	NSMutableArray* _requests;
	unsigned _state;
	FBSDKLogger* _logger;
	unsigned long _requestStartTime;
	double _timeout;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) unsigned long requestStartTime;
@property(retain, nonatomic) FBSDKLogger* logger;
@property(assign, nonatomic) unsigned state;
@property(retain, nonatomic) NSMutableArray* requests;
@property(retain, nonatomic) FBSDKURLConnection* connection;
@property(readonly, retain, nonatomic) NSHTTPURLResponse* URLResponse;
@property(assign, nonatomic) double timeout;
@property(assign, nonatomic) id<FBSDKGraphRequestConnectionDelegate> delegate;
+(id)userAgent;
+(void)setDefaultConnectionTimeout:(double)timeout;
-(void).cxx_destruct;
-(void)processorDidAttemptRecovery:(id)processor didRecover:(BOOL)recover error:(id)error;
-(void)facebookURLConnection:(id)connection didSendBodyData:(int)data totalBytesWritten:(int)written totalBytesExpectedToWrite:(int)write;
-(void)registerTokenToOmitFromLog:(id)log;
-(id)accessTokenWithRequest:(id)request;
-(void)logRequest:(id)request bodyLength:(unsigned)length bodyLogger:(id)logger attachmentLogger:(id)logger4;
-(id)errorWithCode:(int)code statusCode:(int)code2 parsedJSONResponse:(id)response innerError:(id)error message:(id)message;
-(id)errorFromResult:(id)result request:(id)request;
-(void)processResultDebugDictionary:(id)dictionary;
-(void)processResultBody:(id)body error:(id)error metadata:(id)metadata canNotifyDelegate:(BOOL)delegate;
-(void)completeWithResults:(id)results networkError:(id)error;
-(id)parseJSONOrOtherwise:(id)otherwise error:(id*)error;
-(id)parseJSONResponse:(id)response error:(id*)error statusCode:(int)code;
-(void)completeFBSDKURLConnectionWithResponse:(id)response data:(id)data networkError:(id)error;
-(id)urlStringForSingleRequest:(id)singleRequest forBatch:(BOOL)batch;
-(id)requestWithBatch:(id)batch timeout:(double)timeout;
-(void)_validateFieldsParamForGetRequests:(id)getRequests;
-(BOOL)_shouldWarnOnMissingFieldsParam:(id)param;
-(void)appendJSONRequests:(id)requests toBody:(id)body andNameAttachments:(id)attachments logger:(id)logger;
-(void)appendAttachments:(id)attachments toBody:(id)body addFormData:(BOOL)data logger:(id)logger;
-(void)addRequest:(id)request toBatch:(id)batch attachments:(id)attachments batchToken:(id)token;
-(void)setDelegateQueue:(id)queue;
-(void)start;
-(void)overrideVersionPartWith:(id)with;
-(void)cancel;
-(void)addRequest:(id)request completionHandler:(id)handler batchParameters:(id)parameters;
-(void)addRequest:(id)request completionHandler:(id)handler batchEntryName:(id)name;
-(void)addRequest:(id)request completionHandler:(id)handler;
-(void)dealloc;
-(id)init;
@end

