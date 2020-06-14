//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SharedEditing/MSCoding-Protocol.h>

@class NSArray, NSString;

@interface MSPatch : NSObject <MSCoding>
{
    NSString *_patchID;
    NSArray *_patchOperations;
}

+ (id)patchWithOldDocument:(id)arg1 currentDocument:(id)arg2;
+ (void)load;
@property(retain, nonatomic) NSArray *patchOperations; // @synthesize patchOperations=_patchOperations;
@property(readonly, nonatomic) NSString *patchID; // @synthesize patchID=_patchID;
- (void).cxx_destruct;
- (id)replacementObjectForJSONEncoder:(id)arg1;
@property(readonly, nonatomic) NSString *archiveReferenceIdentifier_bc;
- (unsigned long long)applyTo:(id)arg1;
- (void)performPostPatchCleanupInDocument:(id)arg1;
- (void)updateForeignSymbolsInDocument:(id)arg1;
- (id)initWithUnarchiver:(id)arg1;
- (void)encodeWithArchiver:(id)arg1;
- (void)encodeAsJSON:(id)arg1;
- (id)initWithPatchOperations:(id)arg1;

@end
