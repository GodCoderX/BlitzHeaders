/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "PFACLState.h"

@class NSMutableDictionary;

@interface PFMutableACLState : PFACLState {
}
@property(assign, nonatomic, getter=isShared) BOOL shared;
@property(copy, nonatomic) NSMutableDictionary* permissions;
-(id)init;
@end
