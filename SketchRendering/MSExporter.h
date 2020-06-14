//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SketchRendering/MSRenderingContextCacheProvider-Protocol.h>

@class BCCache, MSExportRequest, MSRenderingDriver, NSColorSpace, NSString;

@interface MSExporter : NSObject <MSRenderingContextCacheProvider>
{
    BOOL _isPrinting;
    BOOL _allowSubpixelAntialiasing;
    MSExportRequest *_request;
    MSRenderingDriver *_driver;
    NSColorSpace *_colorSpace;
    BCCache *_cache;
    struct CGRect _bounds;
}

+ (id)exporterForRequest:(id)arg1 colorSpace:(id)arg2 driver:(id)arg3;
+ (id)exporterForRequest:(id)arg1 colorSpace:(id)arg2;
+ (void)registerExporterClass:(Class)arg1 forFormat:(id)arg2;
+ (void)initialize;
@property(nonatomic) BOOL allowSubpixelAntialiasing; // @synthesize allowSubpixelAntialiasing=_allowSubpixelAntialiasing;
@property(nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
@property(retain, nonatomic) BCCache *cache; // @synthesize cache=_cache;
@property(retain, nonatomic) NSColorSpace *colorSpace; // @synthesize colorSpace=_colorSpace;
@property(retain, nonatomic) MSRenderingDriver *driver; // @synthesize driver=_driver;
@property(nonatomic) BOOL isPrinting; // @synthesize isPrinting=_isPrinting;
@property(retain, nonatomic) MSExportRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (BOOL)exportToFileURL:(id)arg1;
- (id)cacheForZoomLevel:(double)arg1;
@property(readonly, nonatomic) BCCache *zoomIndependentCache;
- (void)drawRect:(struct CGRect)arg1 context:(struct CGContext *)arg2;
- (void)drawSliceBackgroundIfNecessary:(struct CGContext *)arg1;
- (id)previewImage;
- (id)bitmapImageRep;
- (id)basicBitmapImageRep;
- (void)draw:(struct CGContext *)arg1;
- (id)image;
- (id)data;
- (struct CGRect)boundsForVectorRender;
- (id)initWithRequest:(id)arg1 colorSpace:(id)arg2 driver:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

