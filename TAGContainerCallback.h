/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol TAGContainerCallback <NSObject>
-(void)containerRefreshFailure:(id)failure failure:(int)failure2 refreshType:(int)type;
-(void)containerRefreshSuccess:(id)success refreshType:(int)type;
-(void)containerRefreshBegin:(id)begin refreshType:(int)type;
@end

