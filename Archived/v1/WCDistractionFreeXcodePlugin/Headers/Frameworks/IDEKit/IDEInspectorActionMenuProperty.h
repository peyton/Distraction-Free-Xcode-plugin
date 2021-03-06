//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEKit/IDEInspectorAbstractActionProperty.h>

@class IDEInspectorKeyPath, NSArray, NSPopUpButton, NSString;

@interface IDEInspectorActionMenuProperty : IDEInspectorAbstractActionProperty
{
    NSArray *_menuItems;
    IDEInspectorKeyPath *_menuItemsKeyPath;
    NSString *_title;
    IDEInspectorKeyPath *_titleKeyPath;
    NSPopUpButton *_pullDown;
}

@property(retain, nonatomic) NSPopUpButton *pullDown; // @synthesize pullDown=_pullDown;
- (void).cxx_destruct;
- (void)setupRefreshTriggersAndConfigure;
- (void)refresh;
- (id)staticMenuItems;
- (void)applyMenuItemsToPullDown:(id)arg1;
- (void)refreshTarget:(id)arg1;
- (void)refreshTitle:(id)arg1;
- (double)baseline;

@end

