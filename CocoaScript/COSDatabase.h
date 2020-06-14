//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDateFormatter, NSMutableDictionary, NSMutableSet, NSString;

@interface COSDatabase : NSObject
{
    struct sqlite3 *_db;
    NSString *_databasePath;
    BOOL _logsErrors;
    BOOL _crashOnErrors;
    BOOL _traceExecution;
    BOOL _checkedOut;
    BOOL _shouldCacheStatements;
    BOOL _isExecutingStatement;
    BOOL _inTransaction;
    double _maxBusyRetryTimeInterval;
    double _startBusyRetryTime;
    NSMutableDictionary *_cachedStatements;
    NSMutableSet *_openResultSets;
    NSMutableSet *_openFunctions;
    NSDateFormatter *_dateFormat;
}

+ (id)storeableDateFormat:(id)arg1;
+ (BOOL)isSQLiteThreadSafe;
+ (id)sqliteLibVersion;
+ (int)FMDBVersion;
+ (id)FMDBUserVersion;
+ (id)databaseWithPath:(id)arg1;
@property BOOL traceExecution; // @synthesize traceExecution=_traceExecution;
@property BOOL checkedOut; // @synthesize checkedOut=_checkedOut;
@property BOOL crashOnErrors; // @synthesize crashOnErrors=_crashOnErrors;
@property BOOL logsErrors; // @synthesize logsErrors=_logsErrors;
@property(retain) NSMutableDictionary *cachedStatements; // @synthesize cachedStatements=_cachedStatements;
- (void).cxx_destruct;
- (void)makeFunctionNamed:(id)arg1 maximumArguments:(int)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)setShouldCacheStatements:(BOOL)arg1;
- (BOOL)shouldCacheStatements;
- (id)inSavePoint:(CDUnknownBlockType)arg1;
- (BOOL)rollbackToSavePointWithName:(id)arg1 error:(id *)arg2;
- (BOOL)releaseSavePointWithName:(id)arg1 error:(id *)arg2;
- (BOOL)startSavePointWithName:(id)arg1 error:(id *)arg2;
- (BOOL)inTransaction;
- (BOOL)beginTransaction;
- (BOOL)beginDeferredTransaction;
- (BOOL)commit;
- (BOOL)rollback;
- (BOOL)update:(id)arg1 withErrorAndBindings:(id *)arg2;
- (BOOL)executeUpdate:(id)arg1 withErrorAndBindings:(id *)arg2;
- (BOOL)executeStatements:(id)arg1 withResultBlock:(CDUnknownBlockType)arg2;
- (BOOL)executeStatements:(id)arg1;
- (BOOL)executeUpdateWithFormat:(id)arg1;
- (BOOL)executeUpdate:(id)arg1 withVAList:(struct __va_list_tag [1])arg2;
- (BOOL)executeUpdate:(id)arg1 withParameterDictionary:(id)arg2;
- (BOOL)executeUpdate:(id)arg1 withArgumentsInArray:(id)arg2;
- (BOOL)executeUpdate:(id)arg1;
- (BOOL)executeUpdate:(id)arg1 error:(id *)arg2 withArgumentsInArray:(id)arg3 orDictionary:(id)arg4 orVAList:(struct __va_list_tag [1])arg5;
- (id)executeQuery:(id)arg1 withVAList:(struct __va_list_tag [1])arg2;
- (id)executeQuery:(id)arg1 withArgumentsInArray:(id)arg2;
- (id)executeQueryWithFormat:(id)arg1;
- (id)executeQuery:(id)arg1;
- (id)executeQuery:(id)arg1 withArgumentsInArray:(id)arg2 orDictionary:(id)arg3 orVAList:(struct __va_list_tag [1])arg4;
- (id)executeQuery:(id)arg1 withParameterDictionary:(id)arg2;
- (void)extractSQL:(id)arg1 argumentsList:(struct __va_list_tag [1])arg2 intoString:(id)arg3 arguments:(id)arg4;
- (void)bindObject:(id)arg1 toColumn:(int)arg2 inStatement:(struct sqlite3_stmt *)arg3;
- (int)changes;
- (long long)lastInsertRowId;
- (id)lastError;
- (id)errorWithMessage:(id)arg1;
- (int)lastErrorCode;
- (BOOL)hadError;
- (id)lastErrorMessage;
- (BOOL)databaseExists;
- (void)warnInUse;
- (BOOL)goodConnection;
- (id)stringFromDate:(id)arg1;
- (id)dateFromString:(id)arg1;
- (void)setDateFormat:(id)arg1;
- (BOOL)hasDateFormatter;
- (BOOL)setKeyWithData:(id)arg1;
- (BOOL)setKey:(id)arg1;
- (BOOL)rekeyWithData:(id)arg1;
- (BOOL)rekey:(id)arg1;
- (void)setCachedStatement:(id)arg1 forQuery:(id)arg2;
- (id)cachedStatementForQuery:(id)arg1;
- (void)clearCachedStatements;
- (void)resultSetDidClose:(id)arg1;
- (void)closeOpenResultSets;
- (BOOL)hasOpenResultSets;
- (void)setBusyRetryTimeout:(int)arg1;
- (int)busyRetryTimeout;
- (double)maxBusyRetryTimeInterval;
- (void)setMaxBusyRetryTimeInterval:(double)arg1;
- (BOOL)close;
- (BOOL)openWithFlags:(int)arg1;
- (BOOL)open;
- (const char *)sqlitePath;
- (struct sqlite3 *)sqliteHandle;
- (id)databasePath;
- (void)dealloc;
- (id)initWithPath:(id)arg1;
- (id)init;
- (BOOL)validateSQL:(id)arg1 error:(id *)arg2;
- (BOOL)columnExists:(id)arg1 columnName:(id)arg2;
- (void)setUserVersion:(unsigned int)arg1;
- (unsigned int)userVersion;
- (void)setApplicationIDString:(id)arg1;
- (id)applicationIDString;
- (void)setApplicationID:(unsigned int)arg1;
- (unsigned int)applicationID;
- (BOOL)columnExists:(id)arg1 inTableWithName:(id)arg2;
- (id)getTableSchema:(id)arg1;
- (id)getSchema;
- (BOOL)tableExists:(id)arg1;
- (id)dateForQuery:(id)arg1;
- (id)dataForQuery:(id)arg1;
- (double)doubleForQuery:(id)arg1;
- (BOOL)boolForQuery:(id)arg1;
- (long long)longForQuery:(id)arg1;
- (int)intForQuery:(id)arg1;
- (id)stringForQuery:(id)arg1;

@end

