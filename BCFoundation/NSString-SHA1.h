//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (SHA1)
+ (id)stringWithPrefix:(id)arg1 number:(long long)arg2;
@property(readonly, nonatomic) NSString *sha1String_bc;
- (id)sha1;
- (id)safeSubstringWithRange_ms:(struct _NSRange)arg1;
- (id)safeSubstringFromIndex_ms:(unsigned long long)arg1;
- (id)safeSubstringToIndex_ms:(unsigned long long)arg1;
- (id)words;
- (BOOL)isValidEmailAddress;
- (BOOL)hasExtension:(id)arg1;
- (id)expandTilde;
- (id)withExtension:(id)arg1;
- (id)withoutExtension;
- (id)extension;
- (id)child:(id)arg1;
- (id)parent;
- (id)uniqueStringComparedToStrings:(id)arg1 includeCopySuffix:(BOOL)arg2;
- (id)splitByBaseAndNumber;
- (BOOL)containsCharacter:(unsigned short)arg1;
- (BOOL)containsSubstring:(id)arg1;
- (id)trimmedString;
- (id)stringWithFirstCharacterLowercase;
- (BOOL)hasSuffix_bc:(id)arg1 options:(unsigned long long)arg2;
- (id)stringByAppendingPathComponents:(id)arg1;
- (id)stringByStrippingStrings:(id)arg1;
- (id)stringByDeletingSuffix:(id)arg1;
- (id)stringByDeletingPrefix:(id)arg1;
- (void)encodeAsKey:(id)arg1;
- (void)encodeAsRAWArchive:(id)arg1;
- (id)safeJSONValue;
- (BOOL)matchesString:(id)arg1 divergingAtLine1:(unsigned long long *)arg2 andLine2:(unsigned long long *)arg3 diverged:(id *)arg4 expected:(id *)arg5 window:(long long)arg6;
- (BOOL)matchesString:(id)arg1 divergingAtLine1:(unsigned long long *)arg2 andLine2:(unsigned long long *)arg3 diverged:(id *)arg4 expected:(id *)arg5;
- (id)linesFrom:(long long)arg1 to:(long long)arg2 lines:(id)arg3;
- (BOOL)matchesString:(id)arg1 divergingAtLine:(unsigned long long *)arg2 after:(id *)arg3 diverged:(id *)arg4 expected:(id *)arg5;
- (BOOL)matchesString:(id)arg1 divergingAfter:(id *)arg2 atIndex:(unsigned long long *)arg3 divergentChar:(unsigned short *)arg4 expectedChar:(unsigned short *)arg5;
- (id)firstLines:(unsigned long long)arg1;
- (id)lastLines:(unsigned long long)arg1;
- (id)stringBySplittingMixedCaps;
- (id)componentsSeparatedByMixedCaps;
@end

