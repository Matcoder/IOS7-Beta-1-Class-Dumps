/* CalendarLandscapeWeekView.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "MobileCal-Structs.h"
#import "EKDayViewContentDelegate.h"
#import "EKPadAllDayViewDelegate.h"
#import "UIScrollViewDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIImage, NSDate, EKDayViewContent, UIImageView, NSCalendar, CalendarOccurrencesCollection, NSDateComponents, NSTimeZone, UIScrollView, EKPadAllDayView;
@protocol CalendarLandscapeWeekViewDataSource, CalendarLandscapeWeekViewDelegate;

__attribute__((visibility("hidden")))
@interface CalendarLandscapeWeekView : XXUnknownSuperclass <EKDayViewContentDelegate, EKPadAllDayViewDelegate, UIScrollViewDelegate> {
	EKPadAllDayView* _allDayView;
	EKDayViewContent* _content;
	UIScrollView* _scrollView;
	UIImageView* _gridExtensionView;
	int _daysToDisplay;
	UIImage* _verticalGridExtensionImage;
@private
	CalendarOccurrencesCollection* _events;
@protected
	int _selectedSecond;
	id<CalendarLandscapeWeekViewDataSource> _dataSource;
	id<CalendarLandscapeWeekViewDelegate> _delegate;
	NSDateComponents* _weekStartDate;
	NSCalendar* _calendar;
	int _orientation;
}
@property(assign, nonatomic) int firstVisibleSecond;
@property(assign, nonatomic) BOOL showsTimeMarker;
@property(readonly, assign, nonatomic) UIScrollView* scrollView;
@property(readonly, assign, nonatomic) EKDayViewContent* content;
@property(readonly, assign, nonatomic) EKPadAllDayView* allDayView;
@property(assign, nonatomic) int orientation;
@property(readonly, assign, nonatomic) BOOL hasAllDayEvents;
@property(copy, nonatomic) NSTimeZone* timeZone;
@property(copy, nonatomic) NSCalendar* calendar;
@property(readonly, assign, nonatomic) NSDate* lastSecondOfWeek;
@property(readonly, assign, nonatomic) NSDateComponents* lastDateOfWeek;
@property(copy, nonatomic) NSDateComponents* weekStartDate;
@property(assign, nonatomic) __weak id<CalendarLandscapeWeekViewDelegate> delegate;
@property(assign, nonatomic) __weak id<CalendarLandscapeWeekViewDataSource> dataSource;
+(float)dayWidthForOrientation:(int)orientation;
+(float)standardWidthForOrientation:(int)orientation;
+(BOOL)isWideScreen;
-(void).cxx_destruct;
-(void)dayViewContent:(id)content didTapPinnedOccurrence:(id)occurrence;
-(void)dayViewContent:(id)content didTapInEmptySpaceOnDay:(double)emptySpaceOnDay;
-(float)yPositionPerhapsMatchingAllDayOccurrence:(id)occurrence atPoint:(CGPoint)point;
-(id)viewForEvent:(id)event;
-(void)addViewToScroller:(id)scroller isAllDay:(BOOL)day;
-(BOOL)isAnimatingScroll;
-(CGPoint)pointAtDate:(id)date isAllDay:(BOOL)day;
-(BOOL)containsDate:(id)date;
-(id)padAllDayViewForTimeframeAfter:(id)timeframeAfter;
-(id)padAllDayViewForTimeframeBefore:(id)timeframeBefore;
-(void)padAllDayViewDidScroll:(id)padAllDayView;
-(void)padAllDayViewEmptySpaceClick:(id)click onDay:(double)day;
-(void)padAllDayView:(id)view didSelectEvent:(id)event;
-(void)dayViewContent:(id)content didSelectEvent:(id)event;
-(id)_verticalGridExtensionImage;
-(void)scrollViewDidEndDecelerating:(id)scrollView;
-(void)scrollViewDidEndDragging:(id)scrollView willDecelerate:(BOOL)decelerate;
-(void)scrollViewDidScroll:(id)scrollView;
-(void)scrollViewWillBeginDragging:(id)scrollView;
-(BOOL)scrollTowardPoint:(CGPoint)point;
-(void)scrollToSecond:(int)second animated:(BOOL)animated;
-(int)_secondAtPosition:(float)position;
-(float)_positionOfSecond:(int)second;
-(float)_verticalOffset;
-(id)_createOccurrenceView:(id)view;
-(void)reloadData;
-(void)_updateTimeMarkerDotDay;
-(id)dateForXOffset:(float)xoffset;
-(void)adjustForVisibleRect:(CGRect)visibleRect;
-(CGSize)sizeThatFits:(CGSize)fits;
-(void)layoutSubviews;
-(void)_showWeekNumbersPreferenceChanged:(id)changed;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame orientation:(int)orientation daysToDisplay:(int)display;
-(id)initWithFrame:(CGRect)frame;
@end