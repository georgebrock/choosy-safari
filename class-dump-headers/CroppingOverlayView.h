/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "FadingOverlayView.h"

@interface CroppingOverlayView : FadingOverlayView
{
    struct _NSRect _targetViewCropRect;
    struct _NSRect _targetViewCropRectBeforeLiveResize;
    struct _NSSize _minimumCropRectSize;
    id _delegate;
    BOOL _displaysHandles;
}

+ (float)maximumOverlayAlpha;
- (void)drawRect:(struct _NSRect)fp8;
- (BOOL)isFlipped;
- (void)mouseDown:(id)fp8;
- (void)setFrame:(struct _NSRect)fp8;
- (void)setFrameOrigin:(struct _NSPoint)fp8;
- (void)setFrameSize:(struct _NSSize)fp8;
- (id)initWithFadingOverlay:(id)fp8;
- (void)setHolesNeedUpdateInRect:(struct _NSRect)fp8;
- (void)targetWindowDidEndLiveResize;
- (void)targetWindowWillStartLiveResize;
- (struct _NSRect)cropRect;
- (id)delegate;
- (BOOL)displaysHandles;
- (struct _NSSize)minimumCropRectSize;
- (void)setCropRect:(struct _NSRect)fp8 constrainedToTarget:(BOOL)fp24;
- (void)setDelegate:(id)fp8;
- (void)setDisplaysHandles:(BOOL)fp8;
- (void)setMinimumCropRectSize:(struct _NSSize)fp8;

@end

