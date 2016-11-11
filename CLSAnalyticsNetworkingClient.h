/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>

@class FABNetworkClient;

@interface CLSAnalyticsNetworkingClient : NSObject {
	FABNetworkClient* _networkClient;
}
@property(readonly, assign, nonatomic) FABNetworkClient* networkClient;
-(void).cxx_destruct;
-(id)requestForLogFilesAtURLs:(id)urls toURL:(id)url withAPIKey:(id)apikey;
-(void)transmitLogFilesAtURLs:(id)urls toURL:(id)url withAPIKey:(id)apikey completionHandler:(id)handler;
-(id)init;
@end

