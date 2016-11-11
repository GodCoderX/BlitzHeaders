/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>

@class BFCancellationToken;

@interface BFCancellationTokenSource : NSObject {
	BFCancellationToken* _token;
}
@property(readonly, assign, nonatomic, getter=isCancellationRequested) BOOL cancellationRequested;
@property(readonly, assign, nonatomic) BFCancellationToken* token;
+(id)cancellationTokenSource;
-(void).cxx_destruct;
-(void)dispose;
-(void)cancelAfterDelay:(int)delay;
-(void)cancel;
-(id)init;
@end

