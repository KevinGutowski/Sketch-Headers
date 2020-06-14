//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MSFlashViewController, NSMutableArray, NSStackView;

@interface MSFlashController : NSObject
{
    NSStackView *_stackView;
    NSMutableArray *_messages;
    MSFlashViewController *_flash;
}

@property(retain, nonatomic) MSFlashViewController *flash; // @synthesize flash=_flash;
@property(retain, nonatomic) NSMutableArray *messages; // @synthesize messages=_messages;
@property(retain, nonatomic) NSStackView *stackView; // @synthesize stackView=_stackView;
- (void).cxx_destruct;
- (void)clearFlash;
- (void)removeMessage:(id)arg1;
- (id)displayFixedMessage:(id)arg1 withHelpHandler:(CDUnknownBlockType)arg2;
- (id)displayWarningMessage:(id)arg1 withHelpHandler:(CDUnknownBlockType)arg2;
- (id)displayMessage:(id)arg1 userClosable:(BOOL)arg2 helpBlock:(CDUnknownBlockType)arg3;
- (id)displayFlashMessage:(id)arg1;

@end
