//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Chocolat/NSViewControllerPresentationAnimator-Protocol.h>
#import <Chocolat/NSWindowDelegate-Protocol.h>

@class BCPopoverWindow, NSString, NSView, NSViewController;
@protocol BCPopoverDelegate;

@interface BCPopover : NSObject <NSWindowDelegate, NSViewControllerPresentationAnimator>
{
    BOOL dontSendNextPopoverWindowSizeNotification;
    BOOL _closesOnWindowDidResignKey;
    BOOL _closed;
    NSViewController *_contentViewController;
    id <BCPopoverDelegate> _delegate;
    BCPopoverWindow *_window;
    long long _screenEdgeBehaviour;
    long long _layerDependency;
    NSView *_attachedToView;
    double _attachedToViewMargin;
    unsigned long long _preferredEdge;
}

+ (void)closeAllPopovers;
+ (BOOL)viewReallyIsInWindow:(id)arg1;
@property(nonatomic, getter=isClosed) BOOL closed; // @synthesize closed=_closed;
@property(nonatomic) unsigned long long preferredEdge; // @synthesize preferredEdge=_preferredEdge;
@property(nonatomic) double attachedToViewMargin; // @synthesize attachedToViewMargin=_attachedToViewMargin;
@property(retain, nonatomic) NSView *attachedToView; // @synthesize attachedToView=_attachedToView;
@property(nonatomic) BOOL closesOnWindowDidResignKey; // @synthesize closesOnWindowDidResignKey=_closesOnWindowDidResignKey;
@property(nonatomic) long long layerDependency; // @synthesize layerDependency=_layerDependency;
@property(nonatomic) long long screenEdgeBehaviour; // @synthesize screenEdgeBehaviour=_screenEdgeBehaviour;
@property(retain, nonatomic) BCPopoverWindow *window; // @synthesize window=_window;
@property(nonatomic) __weak id <BCPopoverDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
- (void).cxx_destruct;
- (void)animateDismissalOfViewController:(id)arg1 fromViewController:(id)arg2;
- (void)animatePresentationOfViewController:(id)arg1 fromViewController:(id)arg2;
- (void)dealloc;
- (void)closeIgnoringViewControllerPresentations;
- (void)closeImmediately:(BOOL)arg1;
- (void)close;
- (id)windowWillReturnUndoManager:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)windowWillClose:(id)arg1;
- (void)windowDidResignKey:(id)arg1;
- (struct CGRect)windowRectForViewSize:(struct CGSize)arg1 above:(struct CGRect)arg2 pointingTo:(struct CGPoint)arg3 edge:(unsigned long long)arg4;
- (struct CGPoint)pointAtEdge:(unsigned long long)arg1 ofRect:(struct CGRect)arg2;
- (void)attachedViewDidMove:(id)arg1;
- (struct CGRect)ensureRectFitsInParentWindow:(struct CGRect)arg1;
- (struct CGPoint)attachToPointInScreenCoordinates;
- (struct CGRect)screenAnchorRect;
@property(readonly, nonatomic) double minimumHeight;
- (struct CGRect)popoverWindowFrame;
- (double)popoverArrowPosition;
- (void)closeAllPopoversNotification:(id)arg1;
- (void)otherPopoverDidShow:(id)arg1;
- (void)contentViewDidResizeNotification:(id)arg1;
- (void)attachedWindowDidMove:(id)arg1;
- (void)configureNotifications:(id)arg1;
- (void)move;
- (void)showRelativeToView:(id)arg1 preferredEdge:(unsigned long long)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

