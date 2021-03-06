/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSView.h"

@class NSColor;

@interface BarBackground : NSView
{
    BOOL _hasTopBorder;
    BOOL _hasBottomBorder;
    BOOL _mouseDownCanMoveWindow;
    BOOL _scopeBarAppearance;
    NSColor *_backgroundColor;
    NSColor *_tintColor;
    NSColor *_bottomBorderColor;
    NSView *_firstChildKeyView;
    NSView *_lastChildKeyView;
    NSView *_externalNextKeyView;
    id _delegate;
}

- (id)firstTopBorderLineColor;
- (id)secondTopBorderLineColor;
- (id)defaultBottomBorderLineColor;
- (void)commonInit;
- (id)initWithFrame:(struct _NSRect)fp8;
- (void)awakeFromNib;
- (void)dealloc;
- (id)delegate;
- (void)setDelegate:(id)fp8;
- (void)viewDidEndLiveResize;
- (void)viewWillStartLiveResize;
- (float)topBorderHeight;
- (void)drawRect:(struct _NSRect)fp8;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)fp8;
- (void)setBottomBorderColor:(id)fp8;
- (void)setTintColor:(id)fp8;
- (id)tintColor;
- (BOOL)isOpaque;
- (BOOL)hasTopBorder;
- (void)setHasTopBorder:(BOOL)fp8;
- (BOOL)hasBottomBorder;
- (void)setHasBottomBorder:(BOOL)fp8;
- (BOOL)usesScopeBarAppearance;
- (void)setUsesScopeBarAppearance:(BOOL)fp8;
- (BOOL)mouseDownCanMoveWindow;
- (void)setMouseDownCanMoveWindow:(BOOL)fp8;
- (void)setExternalNextKeyView:(id)fp8;
- (id)firstChildKeyView;
- (void)setFirstChildKeyView:(id)fp8;
- (id)lastChildKeyView;
- (void)setLastChildKeyView:(id)fp8;
- (void)setDefaultKeyLoop;
- (BOOL)acceptsFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)setNextKeyView:(id)fp8;
- (void)removeFromSuperview;
- (id)accessibilityAttributeValue:(id)fp8;
- (BOOL)accessibilityIsIgnored;

@end

