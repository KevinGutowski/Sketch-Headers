//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface MOClassDescription : NSObject
{
    Class _class;
    BOOL _registered;
}

+ (BOOL)mo_addMethodWithSelector:(SEL)arg1 typeEncoding:(id)arg2 block:(id)arg3 class:(Class)arg4;
+ (id)mo_methodsForClass:(Class)arg1;
+ (id)allocateDescriptionForClassWithName:(id)arg1 superclass:(Class)arg2;
+ (id)descriptionForClass:(Class)arg1;
+ (id)descriptionForClassWithName:(id)arg1;
- (void)addProtocol:(id)arg1;
@property(readonly, copy) NSArray *protocolsWithAncestors;
@property(readonly, copy) NSArray *protocols;
- (BOOL)addProperty:(id)arg1;
@property(readonly, copy) NSArray *propertiesWithAncestors;
@property(readonly, copy) NSArray *properties;
- (BOOL)addInstanceMethodWithSelector:(SEL)arg1 function:(id)arg2;
- (BOOL)addInstanceMethodWithSelector:(SEL)arg1 typeEncoding:(id)arg2 block:(id)arg3;
- (BOOL)addClassMethodWithSelector:(SEL)arg1 function:(id)arg2;
- (BOOL)addClassMethodWithSelector:(SEL)arg1 typeEncoding:(id)arg2 block:(id)arg3;
@property(readonly, copy) NSArray *instanceMethodsWithAncestors;
@property(readonly, copy) NSArray *instanceMethods;
@property(readonly, copy) NSArray *classMethodsWithAncestors;
@property(readonly, copy) NSArray *classMethods;
- (BOOL)addInstanceVariableWithName:(id)arg1 typeEncoding:(id)arg2;
@property(readonly, copy) NSArray *instanceVariables;
@property(readonly, copy) NSArray *instanceVariablesWithAncestors;
@property(readonly, copy) NSArray *ancestors;
@property(readonly) __weak MOClassDescription *superclass;
@property(readonly) Class descriptedClass;
@property(readonly, copy) NSString *name;
- (id)description;
- (Class)registerClass;
- (id)initWithClass:(Class)arg1 registered:(BOOL)arg2;

@end
