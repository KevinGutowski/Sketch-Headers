//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SketchModel/_MSForeignSwatch.h>

@interface MSForeignSwatch : _MSForeignSwatch
{
}

+ (id)symbolPrivateSwatchWithID:(id)arg1 forForeignSymbol:(id)arg2 fromDocument:(id)arg3;
+ (id)foreignObjectCollectionInDocument:(id)arg1;
+ (id)masterFromDocument:(id)arg1 withID:(id)arg2;
+ (id)remoteSharedIDFromSymbolPrivateID:(id)arg1;
+ (unsigned long long)containerType;
- (id)debugQuickLookObject;
- (id)findOrCreatePublicVersion;
- (void)addOrReplaceInDocument:(id)arg1;
- (void)addToDocument:(id)arg1;
- (void)removeFromOwningDocument;
- (void)syncWithRemote:(id)arg1;
- (id)unlinkFromRemote;
- (BOOL)isOutOfDateWithLibrary:(id)arg1;
- (id)remoteShareID;
- (void)setLocalShareID:(id)arg1;
- (id)localShareID;
- (void)setLocalObject:(id)arg1;
- (id)localObject;
- (id)initAsPrivateReferenceForSymbol:(id)arg1 withForeignSwatch:(id)arg2;
- (id)initAsPrivateReferenceForSymbol:(id)arg1 withOriginal:(id)arg2;
- (id)initWithOriginalObject:(id)arg1 inLibrary:(id)arg2;

@end

