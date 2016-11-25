//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSPointerArray;

@interface TunePointerSet : NSObject
{
    NSPointerArray *_pointers;
    long long _capacity;
}

@property long long capacity; // @synthesize capacity=_capacity;
@property(retain, nonatomic) NSPointerArray *pointers; // @synthesize pointers=_pointers;
- (void).cxx_destruct;
- (unsigned long long)count;
- (id)allObjects;
- (void)compact;
- (void *)pointerAtIndex:(unsigned long long)arg1;
- (void)removePointer:(void *)arg1;
- (int)indexOfPointer:(void *)arg1;
- (void)addPointer:(void *)arg1;
- (id)init;

@end

