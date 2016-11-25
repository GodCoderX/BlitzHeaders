//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PFObjectState.h"

@class NSDate, NSDictionary, NSString;

@interface PFMutableObjectState : PFObjectState
{
}

- (void)applyOperationSet:(id)arg1;
- (void)applyState:(id)arg1;
- (void)setUpdatedAtFromString:(id)arg1;
- (void)setCreatedAtFromString:(id)arg1;
- (void)removeServerDataObjectsForKeys:(id)arg1;
- (void)removeServerDataObjectForKey:(id)arg1;
- (void)setServerDataObject:(id)arg1 forKey:(id)arg2;

// Remaining properties
@property(nonatomic, getter=isComplete) _Bool complete; // @dynamic complete;
@property(retain, nonatomic) NSDate *createdAt; // @dynamic createdAt;
@property(nonatomic, getter=isDeleted) _Bool deleted; // @dynamic deleted;
@property(copy, nonatomic) NSString *objectId; // @dynamic objectId;
@property(copy, nonatomic) NSString *parseClassName; // @dynamic parseClassName;
@property(copy, nonatomic) NSDictionary *serverData; // @dynamic serverData;
@property(retain, nonatomic) NSDate *updatedAt; // @dynamic updatedAt;

@end

