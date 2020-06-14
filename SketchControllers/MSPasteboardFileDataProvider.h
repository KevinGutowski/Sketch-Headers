//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface MSPasteboardFileDataProvider : NSObject
{
    NSArray *_layers;
}

+ (id)buildExportRequestsForLayers:(id)arg1 inFolder:(id)arg2;
+ (id)uniqueExportURLForLayer:(id)arg1 inFolder:(id)arg2 comparingTo:(id)arg3;
+ (id)extensionForExportingLayer:(id)arg1;
+ (id)exportLayers:(id)arg1 toFolder:(id)arg2;
+ (void)addLayers:(id)arg1 toPasteboard:(id)arg2;
@property(copy, nonatomic) NSArray *layers; // @synthesize layers=_layers;
- (void).cxx_destruct;
- (void)pasteboard:(id)arg1 provideDataForType:(id)arg2;

@end

