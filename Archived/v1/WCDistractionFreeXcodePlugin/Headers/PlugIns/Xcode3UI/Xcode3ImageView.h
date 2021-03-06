//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSImageView.h"

@class NSImage, NSString, NSTextField;

@interface Xcode3ImageView : NSImageView
{
    NSString *_imageName;
    NSImage *_badgeImage;
    id <Xcode3ImageViewDelegate> _delegate;
    NSTextField *_emptyContentField;
    BOOL isShowingIconset;
}

+ (void)initialize;
@property(retain, nonatomic) id <Xcode3ImageViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSImage *badgeImage; // @synthesize badgeImage=_badgeImage;
@property(copy, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
- (void).cxx_destruct;
- (BOOL)validateMenuItem:(id)arg1;
- (void)contextMenu_deleteImage:(id)arg1;
- (void)contextMenu_selectImageFile:(id)arg1;
- (void)contextMenu_showImageInFinder:(id)arg1;
- (void)delete:(id)arg1;
- (void)_selectFile;
- (void)_delegateSelectFile:(id)arg1;
- (id)_createContextMenu;
- (void)drawRect:(struct CGRect)arg1;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (void)_refreshImage;
- (void)_hideEmptyContentField;
- (void)_showEmptyContentField;
- (void)setImage:(id)arg1;
- (BOOL)wantsPeriodicDraggingUpdates;
- (unsigned long long)draggingUpdated:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)draggingEnded:(id)arg1;
- (void)concludeDragOperation:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (BOOL)prepareForDragOperation:(id)arg1;
- (BOOL)imageNameChanged:(id)arg1 error:(id *)arg2;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)commonInit;
- (id)dvtExtraBindings;
- (BOOL)accessibilityIsIgnored;

@end

