//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DVTInvalidation.h"

@class DVTStackBacktrace, IDEInspectorChooserCategory, IDEInspectorKeyPath, IDEInspectorLayoutGroup, NSImage, NSMenuItem, NSString;

@interface IDEInspectorChooserChoice : NSObject <DVTInvalidation>
{
    CDUnknownBlockType _inspectorLayoutGroupInitializingBlock;
    IDEInspectorLayoutGroup *_inspectorLayoutGroup;
    BOOL _separator;
    BOOL _header;
    NSString *_title;
    IDEInspectorKeyPath *_visibleKeyPath;
    NSImage *_image;
    id <NSCopying> _value;
    NSMenuItem *_menuItem;
    IDEInspectorChooserCategory *_category;
}

+ (id)headerChoiceWithTitle:(id)arg1 visibleKeyPath:(id)arg2 andLayoutGroup:(id)arg3;
+ (id)separatorChoiceWithVisibleKeyPath:(id)arg1 andLayoutGroup:(id)arg2;
+ (void)initialize;
@property(getter=isHeader) BOOL header; // @synthesize header=_header;
@property(getter=isSeparator) BOOL separator; // @synthesize separator=_separator;
@property(retain, nonatomic) IDEInspectorChooserCategory *category; // @synthesize category=_category;
@property(retain) NSMenuItem *menuItem; // @synthesize menuItem=_menuItem;
@property(readonly) id <NSCopying> value; // @synthesize value=_value;
@property(readonly) NSImage *image; // @synthesize image=_image;
@property(readonly) IDEInspectorKeyPath *visibleKeyPath; // @synthesize visibleKeyPath=_visibleKeyPath;
@property(readonly) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
@property(readonly) IDEInspectorLayoutGroup *inspectorLayoutGroup;
- (void)primitiveInvalidate;
- (id)initWithTitle:(id)arg1 image:(id)arg2 value:(id)arg3 visibleKeyPath:(id)arg4 andLayoutGroup:(id)arg5;
- (id)initWithTitle:(id)arg1 image:(id)arg2 value:(id)arg3 visibleKeyPath:(id)arg4 sliceXML:(id)arg5 inspectorController:(id)arg6;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

