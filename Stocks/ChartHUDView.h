/* ChartHUDView.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "Stocks-Structs.h"

@class StockGraphView, UILabel, StockChartView, PricePopoverBar, NSMutableSet, StocksTapDragGestureRecognizer;

__attribute__((visibility("hidden")))
@interface ChartHUDView : XXUnknownSuperclass {
	StockGraphView* _graphView;
	UILabel* _leftDateLabel;
	UILabel* _centeredLabel;
	UILabel* _rightDateLabel;
	int _interval;
	NSMutableSet* _inactiveTouchInfoSet;
	NSMutableSet* _touchInfoSet;
	BOOL _forceTouchUpdate;
	PricePopoverBar* _pricePopoverBar;
	StocksTapDragGestureRecognizer* _tapDragGesture;
	BOOL _enabled;
	BOOL _overlayHidden;
	StockChartView* _chartView;
}
@property(assign, nonatomic, getter=isOverlayHidden) BOOL overlayHidden;
@property(assign, nonatomic) BOOL enabled;
@property(retain, nonatomic) StockGraphView* graphView;
@property(assign, nonatomic) __weak StockChartView* chartView;
+(id)newHUDLabel;
+(id)stringForTimeIntervalSince1970:(double)timeIntervalSince1970 withInterval:(int)interval isDouble:(BOOL)aDouble isLeft:(BOOL)left;
+(void)initializeDateFormattersIfNeededForInterval:(int)interval withTimeZone:(id)timeZone;
+(id)_dateRangeSeparatorString;
-(void).cxx_destruct;
-(void)tapDragGestureChanged:(id)changed;
-(void)_showHUD;
-(BOOL)isTrackingTouches;
-(void)setShowingTracking:(BOOL)tracking withTouchInfo:(id)touchInfo animated:(BOOL)animated;
-(void)setSelectedInterval:(int)interval timeZone:(id)zone;
-(void)layoutSubviews;
-(void)resizeSelectedClipViewsIfNeeded;
-(void)setFrame:(CGRect)frame;
-(id)initWithFrame:(CGRect)frame;
-(void)resetLocale;
@end
