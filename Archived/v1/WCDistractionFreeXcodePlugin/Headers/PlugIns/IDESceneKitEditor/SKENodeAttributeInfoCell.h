//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSButtonCell.h"

@class NSArray;

@interface SKENodeAttributeInfoCell : NSButtonCell
{
    NSArray *_imageNames;
    BOOL _hidden;
}

+ (void)initialize;
@property BOOL hidden; // @synthesize hidden=_hidden;
- (void).cxx_destruct;
- (void)setControlViewWorkaround13788386:(id)arg1;
- (void)setControlView:(id)arg1;
@property(copy) NSArray *nodeAttributeInfo;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawBezelWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGSize)cellSize;

@end

