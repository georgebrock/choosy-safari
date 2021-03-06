/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSResponder.h"

@class ListView, NSMutableArray, NSMutableDictionary;

@interface DownloadViewController : NSResponder
{
    ListView *_listView;
    NSMutableArray *_rows;
    NSMutableDictionary *_entryToRow;
}

- (void)_insertEntry:(id)fp8 atIndex:(unsigned int)fp12;
- (void)_addAllEntries;
- (void)awakeFromNib;
- (void)dealloc;
- (struct _NSSize)bestSize;
- (void)_removeEntry:(id)fp8;
- (void)downloadsDidChange:(id)fp8;
- (void)downloadDidStart:(id)fp8;
- (BOOL)acceptsFirstResponder;
- (id)_selectedEntries;
- (BOOL)_validateEntries:(id)fp8 withBooleanKey:(id)fp12;
- (void)_openEntries:(id)fp8;
- (BOOL)_canOpenEntries:(id)fp8;
- (BOOL)_canOpenSelection;
- (void)_openSelection;
- (void)open:(id)fp8;
- (void)_revealEntries:(id)fp8;
- (BOOL)_canRevealEntries:(id)fp8;
- (BOOL)_canRevealSelection;
- (void)_revealSelection;
- (void)reveal:(id)fp8;
- (void)_resumeEntries:(id)fp8;
- (BOOL)_canResumeEntries:(id)fp8;
- (BOOL)_canResumeSelection;
- (void)_resumeSelection;
- (void)_stopEntries:(id)fp8;
- (BOOL)_canStopEntries:(id)fp8;
- (BOOL)_canStopSelection;
- (void)_stopSelection;
- (void)stopLoading:(id)fp8;
- (void)cancel:(id)fp8;
- (void)stopResume:(id)fp8;
- (void)_copyEntries:(id)fp8;
- (BOOL)_canCopyEntries:(id)fp8;
- (BOOL)_canCopySelection;
- (void)_copySelection;
- (void)copy:(id)fp8;
- (void)_redoRemoveEntries:(id)fp8;
- (void)_undoRemoveEntries:(id)fp8;
- (void)_removeEntries:(id)fp8;
- (BOOL)_canRemoveEntries:(id)fp8;
- (BOOL)_canRemoveSelection;
- (void)_removeSelection;
- (void)removeIdleEntries;
- (void)keyDown:(id)fp8;
- (void)delete:(id)fp8;
- (void)cut:(id)fp8;
- (void)_downloadURLs:(id)fp8;
- (BOOL)_canPaste;
- (void)paste:(id)fp8;
- (unsigned int)draggingEntered:(id)fp8;
- (void)concludeDragOperation:(id)fp8;
- (BOOL)validateUserInterfaceItem:(id)fp8;
- (id)listView:(id)fp8 menuForView:(id)fp12;
- (void)listView:(id)fp8 didSelect:(BOOL)fp12 view:(id)fp16;
- (BOOL)allowsRowSelectionAtPoint:(struct _NSPoint)fp8 inView:(id)fp16;

@end

