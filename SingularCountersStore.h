/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>

@class NSMutableDictionary, SingularKeyValueStore;

@interface SingularCountersStore : NSObject {
	NSMutableDictionary* counterStore;
	SingularKeyValueStore* persistentCounterStore;
}
+(id)sharedCounters;
-(void).cxx_destruct;
-(void)loadCountersFromPersistentStorage;
-(void)syncCountersToPersistentStorage;
-(id)allCounters;
-(void)setCount:(int)count forCounter:(id)counter;
-(int)valueForCounterWithName:(id)name;
-(long)increaseCounter:(id)counter byCount:(long)count;
-(long)increaseCounter:(id)counter;
-(id)init;
@end

