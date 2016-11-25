//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SKProductsRequestDelegate.h"

@class NSString, SKPaymentTransaction, SKProductsRequest;

@interface CBPaymentProductRequestor : NSObject <SKProductsRequestDelegate>
{
    SKPaymentTransaction *_transaction;
    SKProductsRequest *_productRequest;
}

+ (void)initialize;
@property(retain, nonatomic) SKProductsRequest *productRequest; // @synthesize productRequest=_productRequest;
@property(retain, nonatomic) SKPaymentTransaction *transaction; // @synthesize transaction=_transaction;
- (void).cxx_destruct;
- (void)productsRequest:(id)arg1 didReceiveResponse:(id)arg2;
- (void)resolveProducts;
- (id)initWithTransaction:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

