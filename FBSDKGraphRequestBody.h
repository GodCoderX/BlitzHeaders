/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>

@class NSData, NSMutableData;

@interface FBSDKGraphRequestBody : NSObject {
	NSMutableData* _data;
}
@property(readonly, retain, nonatomic) NSData* data;
+(id)mimeContentType;
-(void).cxx_destruct;
-(void)_appendWithKey:(id)key filename:(id)filename contentType:(id)type contentBlock:(id)block;
-(void)appendWithKey:(id)key dataAttachmentValue:(id)value logger:(id)logger;
-(void)appendWithKey:(id)key dataValue:(id)value logger:(id)logger;
-(void)appendWithKey:(id)key imageValue:(id)value logger:(id)logger;
-(void)appendWithKey:(id)key formValue:(id)value logger:(id)logger;
-(void)appendUTF8:(id)a8;
-(id)init;
@end

