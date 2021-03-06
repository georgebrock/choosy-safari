/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSPopUpButton.h"

@interface ClippedItemsIndicator : NSPopUpButton
{
    id _delegate;
}

+ (void)initialize;
+ (void)_loadImages;
- (id)init;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void)becomeKeyWindow;
- (void)resignKeyWindow;
- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (BOOL)needsPanelToBecomeKey;
- (void)moveRight:(id)fp8;
- (void)moveLeft:(id)fp8;
- (void)viewWillMoveToWindow:(id)fp8;
- (BOOL)menuHasKeyEquivalent:(id)fp8 forEvent:(id)fp12 target:(id *)fp16 action:(SEL *)fp20;
- (void)menuNeedsUpdate:(id)fp8;
- (void)mouseDown:(id)fp8;
- (void)drawRect:(struct _NSRect)fp8;

@end

