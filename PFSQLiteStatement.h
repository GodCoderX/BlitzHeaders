//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PFSQLiteStatement : NSObject
{
    struct sqlite3_stmt *_sqliteStatement;
}

@property(readonly) struct sqlite3_stmt *sqliteStatement; // @synthesize sqliteStatement=_sqliteStatement;
- (_Bool)reset;
- (_Bool)close;
- (void)dealloc;
- (id)initWithStatement:(struct sqlite3_stmt *)arg1;

@end

