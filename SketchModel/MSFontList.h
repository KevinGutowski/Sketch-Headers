//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MSDocumentData, NSArray;

@interface MSFontList : NSObject
{
    unsigned long long _cachingIndex;
    NSArray *_documentFontFamilyNames;
    MSDocumentData *_documentData;
    NSArray *_systemFontFamilyNames;
    NSArray *_allFontFamilyNames;
    NSArray *_filteredFontFamilyNames;
}

+ (void)initialize;
@property(retain, nonatomic) NSArray *filteredFontFamilyNames; // @synthesize filteredFontFamilyNames=_filteredFontFamilyNames;
@property(retain, nonatomic) NSArray *allFontFamilyNames; // @synthesize allFontFamilyNames=_allFontFamilyNames;
@property(retain, nonatomic) NSArray *systemFontFamilyNames; // @synthesize systemFontFamilyNames=_systemFontFamilyNames;
@property(readonly, nonatomic) __weak MSDocumentData *documentData; // @synthesize documentData=_documentData;
@property(copy, nonatomic) NSArray *documentFontFamilyNames; // @synthesize documentFontFamilyNames=_documentFontFamilyNames;
- (void).cxx_destruct;
- (void)prepareForDealloc;
- (void)stopCachingFonts;
- (void)dispatchStartCachingFonts;
- (void)startCachingFonts;
- (id)localizedFontNameSortDescriptor;
- (void)clearFilter;
- (void)filter:(id)arg1;
- (unsigned long long)indexOfFont:(id)arg1;
- (id)fontForFontFamilyAtIndex:(unsigned long long)arg1;
- (id)nameOfFontFamilyAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfFontFamilies;
- (void)findCommonFontsInDocument:(id)arg1;
- (id)localizeFontDescriptors:(id)arg1;
- (void)findSystemFonts;
- (void)reloadFonts;
- (id)initWithDocumentData:(id)arg1;

@end
