/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSObject.h"

@class DOMNode;

@interface ClippedNode : NSObject
{
    DOMNode *_node;
    struct _NSRect _clipRect;
}

+ (id)clippedNodeWithNode:(id)fp8 clipRect:(struct _NSRect)fp12;
- (id)_initWithNode:(id)fp8 clipRect:(struct _NSRect)fp12;
- (void)dealloc;
- (struct _NSRect)clipRect;
- (id)node;

@end

