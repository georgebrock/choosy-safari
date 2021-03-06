/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSView.h"

@interface NSView (BrowserNSViewExtras)
- (void)retileAllScrollViews;
- (void)drawForDraggingImageInRect:(struct _NSRect)fp8;
- (id)draggingImage;
- (void)startDragFromEvent:(id)fp8 withBookmark:(id)fp12 andImage:(id)fp16;
- (void)startDragFromEvent:(id)fp8 withPasteBoard:(id)fp12 andImage:(id)fp16;
- (struct _NSSize)currentEventOffsetFromEvent:(id)fp8;
- (id)firstKeyViewInChain;
- (id)lastKeyViewInChain;
- (void)setParentalControlledToolTip;
- (struct _NSRect)_safari_convertRect:(struct _NSRect)fp8 toView:(id)fp24;
- (BOOL)_safari_autoscroll:(id)fp8;
- (struct _NSSize)roundSizeInWindowCoordinates:(struct _NSSize)fp8;
@end

