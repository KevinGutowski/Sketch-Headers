//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MOBoxManager;

@interface MOBox : NSObject
{
    id _representedObject;
    struct OpaqueJSValue *_JSObject;
    MOBoxManager *_manager;
}

@property(readonly) __weak MOBoxManager *manager; // @synthesize manager=_manager;
@property(readonly) struct OpaqueJSValue *JSObject; // @synthesize JSObject=_JSObject;
@property(readonly) id representedObject; // @synthesize representedObject=_representedObject;
- (void).cxx_destruct;
- (void)dealloc;
- (void)disassociateObject;
- (id)initWithManager:(id)arg1 object:(id)arg2 jsObject:(struct OpaqueJSValue *)arg3;

@end
