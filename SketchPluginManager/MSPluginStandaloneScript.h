//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SketchPluginManager/MSPluginScript.h>

@class NSString;

@interface MSPluginStandaloneScript : MSPluginScript
{
    NSString *_wrappedScript;
}

+ (id)wrappedScript:(id)arg1 handler:(id)arg2;
@property(copy, nonatomic) NSString *wrappedScript; // @synthesize wrappedScript=_wrappedScript;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *handler;
- (id)script;
@property(readonly, copy, nonatomic) NSString *rawScript;

@end
