/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>


@interface SingularKeychainHandler : NSObject {
}
+(BOOL)resetKeychain;
+(BOOL)deleteValueForKey:(id)key withService:(id)service;
+(id)loadValueForKey:(id)key withService:(id)service;
+(BOOL)saveValue:(id)value forKey:(id)key withService:(id)service;
@end

