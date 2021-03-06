//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class COScript, MOJavaScriptObject, NSGraphicsContext, NSString, NSTimer, NSWindow;

@interface COSCodeSketcher : NSView
{
    COScript *_jstalk;
    MOJavaScriptObject *_drawRect;
    MOJavaScriptObject *_setup;
    MOJavaScriptObject *_mouseMoved;
    MOJavaScriptObject *_mouseUp;
    MOJavaScriptObject *_mouseDown;
    MOJavaScriptObject *_mouseDragged;
    double _frameRate;
    NSWindow *_mwindow;
    BOOL _flipped;
    NSString *_lookupName;
    NSTimer *_redrawTimer;
    struct CGContext *_context;
    NSGraphicsContext *_nsContext;
    struct CGPoint _mouseLocation;
    struct CGPoint _pmouseLocation;
    BOOL _mousePressed;
    struct CGSize _size;
}

+ (id)codeSketcherWithName:(id)arg1;
@property(retain) MOJavaScriptObject *mouseDragged; // @synthesize mouseDragged=_mouseDragged;
@property(retain) MOJavaScriptObject *mouseDown; // @synthesize mouseDown=_mouseDown;
@property(retain) MOJavaScriptObject *mouseUp; // @synthesize mouseUp=_mouseUp;
@property(retain) MOJavaScriptObject *mouseMoved; // @synthesize mouseMoved=_mouseMoved;
@property(retain) MOJavaScriptObject *setup; // @synthesize setup=_setup;
@property struct CGSize size; // @synthesize size=_size;
@property(retain) NSGraphicsContext *nsContext; // @synthesize nsContext=_nsContext;
@property double frameRate; // @synthesize frameRate=_frameRate;
@property(retain) NSString *lookupName; // @synthesize lookupName=_lookupName;
@property(getter=isMousePressed) BOOL mousePressed; // @synthesize mousePressed=_mousePressed;
@property struct CGPoint pmouseLocation; // @synthesize pmouseLocation=_pmouseLocation;
@property struct CGPoint mouseLocation; // @synthesize mouseLocation=_mouseLocation;
@property(retain) COScript *jstalk; // @synthesize jstalk=_jstalk;
- (void).cxx_destruct;
- (void)sketcherWhatever:(id)arg1;
- (void)update;
- (void)clear;
- (void)fillWithColor:(id)arg1;
- (struct CGContext *)context;
- (void)copy:(id)arg1;
- (void)translateX:(double)arg1 Y:(double)arg2;
- (void)setFlipped:(BOOL)arg1;
- (BOOL)isFlipped;
- (void)mouseMoved:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)viewDidEndLiveResize;
- (void)drawRect:(struct CGRect)arg1;
- (void)popContext;
- (void)pushContext;
- (void)setupWindow;
- (void)fpsTimerHit:(id)arg1;
- (void)start;
- (void)stop;
- (void)resizeContext;
- (void)setDrawRect:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

