//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMViewController.h"

#import "MMSuggestionPopoverBackgrounViewDelegate.h"
#import "MMTableViewDelegate.h"
#import "NSTableViewDataSource.h"
#import "NSTableViewDelegate.h"

@class MMTableView, NSArray, NSString, RBLPopover;

@interface MMWebSearchSuggestViewController : MMViewController <NSTableViewDelegate, NSTableViewDataSource, MMTableViewDelegate, MMSuggestionPopoverBackgrounViewDelegate>
{
    id <MMWebSearchSuggestVCDelegate> _delegate;
    NSArray *_suggestionResults;
    MMTableView *_tableView;
    RBLPopover *_popover;
}

@property(retain, nonatomic) RBLPopover *popover; // @synthesize popover=_popover;
@property(nonatomic) __weak MMTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSArray *suggestionResults; // @synthesize suggestionResults=_suggestionResults;
@property(nonatomic) __weak id <MMWebSearchSuggestVCDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)chooseCurrentSuggestion:(id)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;
- (void)tableView:(id)arg1 rowGotMouseUp:(long long)arg2;
- (void)tableView:(id)arg1 rowGotMouseDown:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)_updateTableviewSelectionDisplay;
- (void)_selectAndScrollToRow:(long long)arg1;
- (void)chooseCurrentItem;
- (void)selectNextItem;
- (void)selectPrevItem;
- (void)hide;
- (void)showSuggestionWithKeyword:(id)arg1 inView:(id)arg2 relativeRect:(struct CGRect)arg3;
- (BOOL)isSelecting;
- (BOOL)isDisplaying;
- (struct CGSize)sizeForBackgroundViewWithContentSize:(struct CGSize)arg1 popoverEdge:(unsigned int)arg2;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

