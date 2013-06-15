/* SBAppSliderScrollingViewController.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"
#import "UIScrollViewDelegate.h"

@class SBStopScrollingGestureRecognizer, NSMutableArray, UITapGestureRecognizer, SBAppSliderScrollView;
@protocol SBAppSliderScrollingViewDelegate;

__attribute__((visibility("hidden")))
@interface SBAppSliderScrollingViewController : XXUnknownSuperclass <UIScrollViewDelegate> {
	NSMutableArray* _items;
	SBAppSliderScrollView* _scrollView;
	BOOL _dragMaster;
	BOOL _preventScroll;
	UITapGestureRecognizer* _tapGesture;
	SBStopScrollingGestureRecognizer* _stopScrollingGesture;
	int _layoutOrientation;
	id _scrollDoneBlock;
	id<SBAppSliderScrollingViewDelegate> _delegate;
}
@property(assign, nonatomic) float normalizedOffset;
@property(assign, nonatomic) id<SBAppSliderScrollingViewDelegate> delegate;
-(void)scrollViewDidEndScrollingAnimation:(id)scrollView;
-(void)scrollViewWillEndDragging:(id)scrollView withVelocity:(CGPoint)velocity targetContentOffset:(inout CGPoint*)offset;
-(void)scrollViewDidScroll:(id)scrollView;
-(void)scrollViewDidEndDecelerating:(id)scrollView;
-(void)scrollViewDidEndDragging:(id)scrollView willDecelerate:(BOOL)decelerate;
-(void)scrollViewWillBeginDragging:(id)scrollView;
-(BOOL)_isIndexVisible:(unsigned)visible withSidePadding:(float)sidePadding;
-(void)_generateNecessaryPageViews;
-(void)_layout;
-(void)_layoutIndexContainer:(unsigned)container;
-(void)_generateViewIndexIfNecessary:(unsigned)necessary;
-(CGRect)_naturalScrollViewFrame;
-(CGPoint)_centerOfIndex:(unsigned)index;
-(float)_distanceBetweenCenters;
-(void)_handleStopGesture:(id)gesture;
-(void)_handleTapGesture:(id)gesture;
-(void)removeIndex:(unsigned)index duration:(double)duration;
-(void)reloadInOrientation:(int)orientation;
-(float)_halfWidth;
-(void)loadView;
-(unsigned)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(BOOL)shouldAutomaticallyForwardRotationMethods;
-(float)preferredHeightForOrientation:(int)orientation;
-(void)switcherWasDismissed:(BOOL)dismissed;
-(BOOL)isScrolling;
-(id)pageViewForIndex:(unsigned)index;
-(unsigned)currentPage;
-(void)setScrollingDoneBlock:(id)block;
-(BOOL)isIndexVisible:(unsigned)visible;
-(unsigned)settledIndexForNormalizedOffset:(inout float*)normalizedOffset andXVelocity:(float)velocity;
-(float)normalizedOffsetForOffset:(float)offset andXVelocity:(float)velocity;
-(float)normalizedOffsetOfIndex:(unsigned)index;
-(void)setOffsetToIndex:(unsigned)index animated:(BOOL)animated;
-(void)cancelScrolling;
-(float)_maxXOffset;
-(void)dealloc;
-(id)init;
@end