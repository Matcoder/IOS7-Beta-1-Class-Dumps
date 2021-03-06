/* RecentsViewController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "CollectionsTableViewController.h"

@class CurrentLocationHistoryItem, NSArray, CustomSearchResultHistoryItem, UIActionSheet, DirectionsHomeHistoryItem;
@protocol RecentsViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface RecentsViewController : CollectionsTableViewController {
	UIActionSheet* _clearRecentsActionSheet;
	CurrentLocationHistoryItem* _currentLocationHistoryItem;
	CustomSearchResultHistoryItem* _customSearchResultHistoryItem;
	DirectionsHomeHistoryItem* _directionsHomeHistoryItem;
	id<RecentsViewControllerDelegate> _recentsViewControllerDelegate;
	BOOL _abAllowed;
	NSArray* _systemRecents;
}
@property(retain, nonatomic) DirectionsHomeHistoryItem* directionsHomeHistoryItem;
@property(retain, nonatomic) CustomSearchResultHistoryItem* customSearchResultHistoryItem;
@property(retain, nonatomic) CurrentLocationHistoryItem* currentLocationHistoryItem;
@property(copy, nonatomic) NSArray* systemRecents;
@property(assign, nonatomic) id<RecentsViewControllerDelegate> recentsViewControllerDelegate;
+(id)_searchRequestFromString:(id)string;
+(id)title;
+(id)dataSourceChangedNotification;
-(void)dealloc;
-(void)viewDidLoad;
-(void)cancelActionSheetAnimated:(BOOL)animated;
-(void)_presentClearRecentsAlert;
-(void)actionSheet:(id)sheet didDismissWithButtonIndex:(int)buttonIndex;
-(void)dataSourceChanged:(id)changed;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(BOOL)_updateDirectionsHome;
-(void)_updateCustomSearchResult;
-(BOOL)_updateCurrentLocation;
-(void)_updateSystemRecents;
-(unsigned)numberOfRows;
-(id)initWithStyle:(int)style;
@end
