//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDEInspectorProperty.h"

#import "SKEParticlePropertyControllerViewControllerDelegate.h"

@class IDEInspectorKeyPath, NSButton, NSPopover, NSString, NSTextField, SCNParticlePropertyController, SKEParticlePropertyControllerViewController;

@interface SKEParticlePropertyControllerProperty : IDEInspectorProperty <SKEParticlePropertyControllerViewControllerDelegate>
{
    NSButton *_button;
    NSTextField *_label;
    SCNParticlePropertyController *_particlePropertyController;
    IDEInspectorKeyPath *_valueKeyPath;
    NSPopover *_popover;
    SKEParticlePropertyControllerViewController *_editorViewController;
}

- (void).cxx_destruct;
- (void)showEditor:(id)arg1;
- (void)particlePropertyControllerViewControllerParticlePropertyControllerDidChange:(id)arg1;
- (void)updateLabel;
- (void)primitiveInvalidate;
- (void)setupRefreshTriggersAndConfigure;
- (void)refresh;
- (double)baseline;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

