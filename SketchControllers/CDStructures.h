//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 13 2020 22:17:22).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct BCEdgePaddings {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
};

struct BCLine {
    double _field1;
    double _field2;
    double _field3;
};

struct BCLineSegment {
    struct CGPoint origin;
    struct CGVector vector;
};

struct CGAffineTransform {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
};

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct CGVector {
    double dx;
    double dy;
};

struct MSModelObject {
    Class _field1;
    id _field2;
    id _field3;
    char _field4;
};

struct MSRenderingParameters {
    struct CGRect _field1;
    double _field2;
    double _field3;
    struct CGSize _field4;
    unsigned long long _field5;
};

struct NSBezierElement {
    unsigned long long _field1;
    struct CGPoint _field2;
    struct CGPoint _field3[2];
};

struct NSEdgeInsets {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
};

struct _CHTransformStruct {
    double _field1;
    char _field2;
    char _field3;
    char _field4;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long numberOfRows;
    unsigned long long numberOfColumns;
    long long horizontalPadding;
    long long verticalPadding;
    char hasHorizontalPadding;
    char hasVerticalPadding;
    char skipFillingHoles;
} CDStruct_ec0e0888;

typedef struct {
    double position;
    unsigned long long axis;
} CDStruct_b7168832;

typedef struct {
    long long _field1;
    long long _field2;
    long long _field3;
} CDStruct_2ec95fd7;

