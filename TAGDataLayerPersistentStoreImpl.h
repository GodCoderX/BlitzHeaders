/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import </libobjc.A.h>
#import "wotblitz-Structs.h"
#import "TAGDataLayerPersistentStore.h"

@class NSString, NSOperationQueue;

__attribute__((visibility("hidden")))
@interface TAGDataLayerPersistentStoreImpl : NSObject <TAGDataLayerPersistentStore> {
	NSString* _databaseName;
	unsigned _maxNumStoredItems;
	NSOperationQueue* _operationQueue;
	sqlite3* _database;
	sqlite3_stmt* _insertAnEntryStmt;
	sqlite3_stmt* _queryNumberEntriesStmt;
	sqlite3_stmt* _queryAllEntriesStmt;
	sqlite3_stmt* _queryEntryIdsStmt;
	sqlite3_stmt* _deleteOlderThanStmt;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign) sqlite3_stmt* deleteOlderThanStmt;
@property(assign) sqlite3_stmt* queryEntryIdsStmt;
@property(assign) sqlite3_stmt* queryAllEntriesStmt;
@property(assign) sqlite3_stmt* queryNumberEntriesStmt;
@property(assign) sqlite3_stmt* insertAnEntryStmt;
@property(assign) sqlite3* database;
@property(readonly, assign) NSOperationQueue* operationQueue;
@property(assign) unsigned maxNumStoredItems;
@property(readonly, assign) NSString* databaseName;
-(void).cxx_destruct;
-(double)currentTimeInMilliseconds;
-(void)closeDatabase;
-(BOOL)openDatabaseAndInitStatements;
-(sqlite3_stmt*)prepareSql:(id)sql description:(id)description;
-(BOOL)tablePresent:(id)present;
-(void)deleteEntriesOlderThan:(unsigned long long)than;
-(id)questionMarks:(unsigned)marks;
-(unsigned)numStoredEntries;
-(id)peekEntryIds:(unsigned)ids;
-(void)deleteEntries:(id)entries;
-(void)makeRoomForEntries:(unsigned)entries;
-(void)writeEntriesToDatabase:(id)database expireTime:(unsigned long long)time;
-(id)loadSerialized;
-(id)serialize:(id)serialize;
-(id)unserialize:(id)unserialize;
-(id)serializeValues:(id)values;
-(id)unserializeValues:(id)values;
-(void)clearKeysWithPrefixSingleThreaded:(id)prefixSingleThreaded;
-(void)saveSingleThreaded:(id)threaded lifetimeInMillis:(unsigned long long)millis;
-(id)loadSingleThreaded;
-(void)clearKeysWithPrefix:(id)prefix;
-(void)loadSaved:(id)saved;
-(void)saveKeyValues:(id)values lifetimeInMillis:(unsigned long long)millis;
-(void)dealloc;
-(id)initWithDatabaseName:(id)databaseName maxNumStoredItems:(unsigned)items operationQueue:(id)queue;
-(id)init;
@end

