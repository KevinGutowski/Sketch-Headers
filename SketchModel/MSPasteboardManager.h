//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface MSPasteboardManager : NSObject
{
    NSMutableArray *_readers;
    NSMutableArray *_writers;
}

@property(retain, nonatomic) NSMutableArray *writers; // @synthesize writers=_writers;
@property(retain, nonatomic) NSMutableArray *readers; // @synthesize readers=_readers;
- (void).cxx_destruct;
- (void)registerViewForSupportedDraggedTypes:(id)arg1;
- (void)registerReader:(id)arg1;
- (void)registerWriter:(id)arg1;
- (void)writePasteboardLayers:(id)arg1 toPasteboard:(id)arg2;
- (id)readPasteboardLayersFromPasteboard:(id)arg1 colorSpace:(id)arg2 options:(unsigned long long)arg3 sender:(id)arg4 convertColorSpace:(BOOL)arg5;
- (id)readPasteboardLayersFromPasteboard:(id)arg1 colorSpace:(id)arg2 options:(unsigned long long)arg3 convertColorSpace:(BOOL)arg4;
- (id)readPasteboardLayersFromDrag:(id)arg1 colorSpace:(id)arg2 convertColorSpace:(BOOL)arg3;
- (id)init;

@end

