/* PadYearViewController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "MobileCal-Structs.h"
#import "OverridableRightNavigationBarButtonItems.h"
#import "OverridableToolbarItems.h"
#import "CanSelectDate.h"
#import "CanHandleEventShowing.h"
#import "CalendarMainView.h"
#import "YearViewController.h"

@class EKCalendarDate;

__attribute__((visibility("hidden")))
@interface PadYearViewController : YearViewController <OverridableRightNavigationBarButtonItems, OverridableToolbarItems, CanSelectDate, CanHandleEventShowing, CalendarMainView> {
	EKCalendarDate* _initialDate;
	EKCalendarDate* _activeDateDuringRotation;
}
@property(retain, nonatomic) EKCalendarDate* activeDateDuringRotation;
-(void).cxx_destruct;
-(unsigned)monthsPerRow;
-(Class)monthViewControllerClass;
-(Class)multipleMonthViewClass;
-(BOOL)shouldAnimateScrollToDate:(id)date fromClosestDate:(id)closestDate;
-(unsigned)supportedInterfaceOrientations;
-(void)viewWillLayoutSubviews;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
-(void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)viewDidAppear:(BOOL)view;
-(id)initWithCalendarDate:(id)calendarDate model:(id)model;
@end
