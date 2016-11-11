/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>

@class PFFileManager, PFAsyncTaskQueue;

@interface PFSQLiteDatabaseController : NSObject {
	PFAsyncTaskQueue* _openDatabaseQueue;
	PFFileManager* _fileManager;
}
@property(readonly, assign, nonatomic) PFFileManager* fileManager;
+(id)controllerWithFileManager:(id)fileManager;
-(void).cxx_destruct;
-(id)openDatabaseWithNameAsync:(id)nameAsync;
-(id)initWithFileManager:(id)fileManager;
-(id)init;
@end

