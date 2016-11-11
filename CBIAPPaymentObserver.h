/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>
#import "SKPaymentTransactionObserver.h"

@class NSString;

@interface CBIAPPaymentObserver : NSObject <SKPaymentTransactionObserver> {
	BOOL _observingTransactions;
	BOOL _codeSetValue;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) BOOL codeSetValue;
@property(assign, nonatomic) BOOL observingTransactions;
+(id)sharedPaymentObserver;
-(void)handleTransaction:(id)transaction;
-(void)paymentQueue:(id)queue updatedTransactions:(id)transactions;
-(void)stopObservingTransactions;
-(void)startObservingTransactions;
-(void)setConfigPreference:(BOOL)preference;
-(void)setCodePreference:(BOOL)preference;
-(id)init;
@end
