/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol FBDisplayAdAdapterDelegate <NSObject>
-(void)adapterWillLogImpression:(id)adapter;
-(void)adapter:(id)adapter didFailWithError:(id)error;
-(void)adapterDidLoad:(id)adapter;
-(void)adapterDidClick:(id)adapter url:(id)url playerHandles:(BOOL)handles;
@optional
-(void)adapterDidUnload:(id)adapter;
-(void)adapterWillUnload:(id)adapter;
-(void)adapterDidFinishHandlingClick:(id)adapter;
@end

