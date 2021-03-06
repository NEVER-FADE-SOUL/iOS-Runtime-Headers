/* Generated by RuntimeBrowser
   Image: /usr/lib/libprequelite.dylib
 */

@interface PQLResultSet : NSObject <PQLEnumeration> {
    unsigned int  _columns;
    PQLConnection * _db;
    NSSet * _defaultUnarchivingAllowedClasses;
    NSError * _error;
    BOOL  _hasValuable;
    BOOL  _inTransaction;
    id  _lastEnumeratedObject;
    Class  _objectsClass;
    SEL  _objectsClassInitializer;
    id /* block */  _objectsConstructor;
    BOOL  _requiresSecureCoding;
    unsigned int  _rowNumber;
    PQLStatement * _stmt;
}

@property (nonatomic, readonly) unsigned int columns;
@property (nonatomic, readonly) PQLConnection *db;
@property (nonatomic, retain) NSSet *defaultUnarchivingAllowedClasses;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic) BOOL requiresSecureCoding;
@property (nonatomic, readonly) unsigned int rowNumber;
@property (nonatomic, readonly) struct sqlite3_stmt { }*stmt;

- (void).cxx_destruct;
- (const char *)UTF8StringAtIndex:(int)arg1;
- (BOOL)_next:(BOOL)arg1;
- (id)archivedObjectOfClass:(Class)arg1 atIndex:(int)arg2;
- (id)archivedObjectOfClasses:(id)arg1 atIndex:(int)arg2;
- (BOOL)boolAtIndex:(int)arg1;
- (BOOL)charAtIndex:(int)arg1;
- (void)close;
- (id)columnNameAtIndex:(int)arg1;
- (unsigned int)columns;
- (unsigned int)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned int)arg3;
- (id)dataAtIndex:(int)arg1;
- (id)dataAtIndex:(int)arg1 noCopy:(BOOL)arg2;
- (id)dateAtIndex:(int)arg1;
- (id)db;
- (void)dealloc;
- (id)defaultUnarchivingAllowedClasses;
- (id)description;
- (double)doubleAtIndex:(int)arg1;
- (/* Warning: unhandled struct encoding: '{PQLResultSet=#@#:c@?@cc@@II@}' */ struct PQLResultSet { Class x1; id x2; SEL x3; BOOL x4; id /* block */ x5; id x6; BOOL x7; id x8; unsigned int x9; unsigned int x10; id x11; }*)enumerateObjects:(id /* block */)arg1;
- (/* Warning: unhandled struct encoding: '{PQLResultSet=#@#:c@?@cc@@II@}' */ struct PQLResultSet { Class x1; id x2; SEL x3; BOOL x4; id /* block */ x5; id x6; BOOL x7; id x8; unsigned int x9; unsigned int x10; id x11; }*)enumerateObjectsOfClass:(Class)arg1;
- (/* Warning: unhandled struct encoding: '{PQLResultSet=#@#:c@?@cc@@II@}' */ struct PQLResultSet { Class x1; id x2; SEL x3; BOOL x4; id /* block */ x5; id x6; BOOL x7; id x8; unsigned int x9; unsigned int x10; id x11; }*)enumerateObjectsOfClass:(Class)arg1 initializer:(SEL)arg2;
- (id)error;
- (float)floatAtIndex:(int)arg1;
- (id)initWithStatement:(id)arg1 usingDatabase:(id)arg2;
- (int)intAtIndex:(int)arg1;
- (int)integerAtIndex:(int)arg1;
- (BOOL)isNullAtIndex:(int)arg1;
- (long)longAtIndex:(int)arg1;
- (long long)longLongAtIndex:(int)arg1;
- (BOOL)next;
- (id)nextObject;
- (id)numberAtIndex:(int)arg1;
- (id)object:(id /* block */)arg1;
- (id)objectAtIndex:(int)arg1;
- (id)objectAtIndexedSubscript:(unsigned int)arg1;
- (id)objectOfClass:(Class)arg1;
- (id)objectOfClass:(Class)arg1 atIndex:(int)arg2;
- (id)objectOfClass:(Class)arg1 initializer:(SEL)arg2;
- (id)onlyObject:(id /* block */)arg1;
- (id)onlyObjectOfClass:(Class)arg1;
- (id)onlyObjectOfClass:(Class)arg1 initializer:(SEL)arg2;
- (id)plistAtIndex:(int)arg1;
- (BOOL)requiresSecureCoding;
- (unsigned int)rowNumber;
- (void)setDefaultUnarchivingAllowedClasses:(id)arg1;
- (void)setRequiresSecureCoding:(BOOL)arg1;
- (short)shortAtIndex:(int)arg1;
- (struct Mem { }*)sqliteValueAtIndex:(int)arg1;
- (struct sqlite3_stmt { }*)stmt;
- (id)stringAtIndex:(int)arg1;
- (unsigned char)unsignedCharAtIndex:(int)arg1;
- (unsigned int)unsignedIntAtIndex:(int)arg1;
- (unsigned int)unsignedIntegerAtIndex:(int)arg1;
- (unsigned long)unsignedLongAtIndex:(int)arg1;
- (unsigned long long)unsignedLongLongAtIndex:(int)arg1;
- (unsigned short)unsignedShortAtIndex:(int)arg1;
- (id)uuidAtIndex:(int)arg1;

@end
