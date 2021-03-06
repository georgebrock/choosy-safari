/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "WebDocumentText-Protocol.h"

@protocol WebDocumentSelection <WebDocumentText>
- (id)pasteboardTypesForSelection;
- (void)writeSelectionWithPasteboardTypes:(id)fp8 toPasteboard:(id)fp12;
- (id)selectionTextRects;
- (struct _NSRect)selectionRect;
- (id)selectionImageForcingBlackText:(BOOL)fp8;
- (id)selectionImageForcingWhiteText:(BOOL)fp8;
- (struct _NSRect)selectionImageRect;
- (id)selectionView;
@end

