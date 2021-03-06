/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "TabBarView.h"

@interface TabBarView (Internal)
- (id)_insertTabButtonWithTabViewItem:(id)fp8 atIndex:(unsigned int)fp12;
- (void)_removeTabButton:(id)fp8;
- (unsigned int)_numberOfVisibleTabViewItems;
- (float)_buttonWidthAndIsClipping:(char *)fp8;
- (BOOL)_isVisible;
- (void)_updateSeparators;
- (id)_previousVisibleButtonBeforeIndex:(unsigned int)fp8;
- (id)_nextVisibleButtonAfterIndex:(unsigned int)fp8;
- (void)_layOutButtons;
- (void)_updateKeyLoop;
- (void)_bringSelectedTabToFront:(BOOL)fp8;
- (void)_didClickTabButton:(id)fp8;
- (void)_didClickCloseButton:(id)fp8;
- (void)_selectClippedTabViewItem:(id)fp8;
- (void)_detachTab:(id)fp8 withClickPoint:(struct _NSPoint)fp12 sourceView:(id)fp20;
- (struct _NSPoint)_mouseLocationForDraggingInfo:(id)fp8;
- (void)_performTabBarDragOperationForTabViewItem:(id)fp8 URL:(id)fp12;
- (void)_performTabBarDragOperationForURL:(id)fp8 droppedOnRightSide:(BOOL)fp12;
- (void)_reselectTabSelectedBeforeTabDrag;
- (void)_leftTruncateButtonTitles;
- (void)_leftTruncateButtonTitlesSoon;
- (id)_leftTruncateWordsFrom:(id)fp8 withFont:(id)fp12 width:(float)fp16 maxWordsToRemove:(unsigned int)fp20;
- (id)_leftTruncateStrings:(id)fp8 withFont:(id)fp12 width:(float)fp16;
- (void)_setCloseButtonsVisible:(BOOL)fp8;
- (void)_setWindowBackgroundImage:(id)fp8;
- (id)_windowBackgroundImage;
- (void)_windowBackgroundDidChange;
@end

