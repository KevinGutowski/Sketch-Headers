//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PDFOperatorInfo : NSObject
{
    SEL _selector;
    CDUnknownFunctionPointerType _callback;
    NSString *_operatorName;
    NSString *_methodName;
}

@property(retain, nonatomic) NSString *methodName; // @synthesize methodName=_methodName;
@property(retain, nonatomic) NSString *operatorName; // @synthesize operatorName=_operatorName;
@property(nonatomic) CDUnknownFunctionPointerType callback; // @synthesize callback=_callback;
@property(nonatomic) SEL selector; // @synthesize selector=_selector;
- (void).cxx_destruct;
- (id)description;

@end

