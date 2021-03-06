/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSToolbarItem.h"

@interface BrowserToolbarItem : NSToolbarItem
{
    unsigned int _handledMouseDownModifiersMask;
}

- (unsigned int)handledMouseDownModifiersMask;
- (void)setHandledMouseDownModifiersMask:(unsigned int)fp8;
- (BOOL)_allowToolbarToStealEvent:(id)fp8;
- (id)initWithItemIdentifier:(id)fp8 target:(id)fp12 view:(id)fp16;
- (id)initWithItemIdentifier:(id)fp8 target:(id)fp12 boxOfButtons:(id)fp16 label:(id)fp20;
- (id)initWithItemIdentifier:(id)fp8 target:(id)fp12 button:(id)fp16;
- (void)validate;

@end

