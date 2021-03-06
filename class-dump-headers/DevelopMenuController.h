/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMenu, NSMenuItem;

@interface DevelopMenuController : NSObject
{
    NSMenuItem *_developMenuItem;
    NSMenu *_userAgentMenu;
    NSMenu *_openWithMenu;
    BOOL _menuInstalled;
    struct SnippetEditorController *_snippetEditorController;
}

+ (id)sharedController;
- (void)dealloc;
- (void)installMenu;
- (void)removeMenu;
- (void)showSnippetEditor:(id)fp8;
- (void)menuNeedsUpdate:(id)fp8;
- (BOOL)menuHasKeyEquivalent:(id)fp8 forEvent:(id)fp12 target:(id *)fp16 action:(SEL *)fp20;

@end

