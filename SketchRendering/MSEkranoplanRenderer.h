//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SketchRendering/MSTilingSystemProvider-Protocol.h>

@class CALayer, CAMetalLayer, MSRenderInstruction, NSView;
@protocol MSTiledRendererHostView;

@interface MSEkranoplanRenderer : NSObject <MSTilingSystemProvider>
{
    NSView<MSTiledRendererHostView> *hostView;
    CALayer *layer;
    CAMetalLayer *_metalLayer;
    MSRenderInstruction *_renderedInstruction;
}

@property(copy) MSRenderInstruction *renderedInstruction; // @synthesize renderedInstruction=_renderedInstruction;
@property(retain, nonatomic) CAMetalLayer *metalLayer; // @synthesize metalLayer=_metalLayer;
@property(nonatomic) __weak NSView<MSTiledRendererHostView> *hostView; // @synthesize hostView;
- (void).cxx_destruct;
@property(readonly, nonatomic) CALayer *layer; // @synthesize layer;
- (BOOL)isDrawing;
- (void)updateContentWithRenderInstruction:(id)arg1 synchronously:(BOOL)arg2 hasUserFocus:(BOOL)arg3;
- (id)initWithCompletionHandler:(CDUnknownBlockType)arg1 syncFirstFrame:(BOOL)arg2;

@end

