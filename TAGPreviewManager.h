/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TAGPreviewManager : NSObject {
	int _previewMode;
	NSString* _ctfeUrlPath;
	NSString* _containerId;
}
@property(retain) NSString* containerId;
@property(retain) NSString* ctfeUrlPath;
@property(assign) int previewMode;
+(id)instance;
-(void).cxx_destruct;
-(id)containerIdForQuery:(id)query;
-(void)clear;
-(BOOL)isPreviewingContainer:(id)container;
-(BOOL)generatePreviewDataForUrl:(id)url;
-(id)init;
@end

