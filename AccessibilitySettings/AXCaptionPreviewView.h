/* AXCaptionPreviewView.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "AccessibilitySettings-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIView, AXCaptionSubtitlePreviewView, NSTimer, UIImageView, AXThreadTimer, UIButton;
@protocol AXCaptionPreviewDelegate;

__attribute__((visibility("hidden")))
@interface AXCaptionPreviewView : XXUnknownSuperclass {
@private
	UIView* _whiteBottomBorder;
	AXCaptionSubtitlePreviewView* _subtitle;
	UIButton* _expandCollapseButton;
	BOOL _isExpanded;
	UIView* _cloudContainer;
	UIImageView* _cloudView1;
	UIImageView* _cloudView2;
	NSTimer* _cloudTimer;
	int _cloudIndex;
	int _viewIndex;
	double _movementEndTime;
	BOOL _animationsRunning;
	BOOL _fadeInProgress;
	BOOL _cloud1MoveInProgress;
	BOOL _cloud2MoveInProgress;
	AXThreadTimer* _updateSettingsTimer;
	BOOL transitioningToSmallerView;
	BOOL transitioningToBiggerView;
	id<AXCaptionPreviewDelegate> previewDelegate;
	CGPoint originalCenter;
	CGRect visibleFrame;
	CGRect originalFrame;
}
@property(assign, nonatomic) BOOL transitioningToBiggerView;
@property(assign, nonatomic) BOOL transitioningToSmallerView;
@property(assign, nonatomic) BOOL isExpanded;
@property(readonly, assign, nonatomic) CGRect visibleFrame;
@property(assign, nonatomic) CGPoint originalCenter;
@property(assign, nonatomic) CGRect originalFrame;
@property(assign, nonatomic) id<AXCaptionPreviewDelegate> previewDelegate;
-(void)showNextImage;
-(id)currentSlide;
-(id)nextSlide;
-(void)startBackgroundAnimation;
-(void)_updateButtonStyle;
-(void)stopBackgroundAnimation;
-(void)_expandPressed:(id)pressed;
-(void)layoutSubviews;
-(void)updateExpandButtonPosition;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
-(id)cloudImages;
-(void)_updateSubtitle:(id)subtitle;
-(void)_previewTapped:(id)tapped;
-(BOOL)inTable;
-(id)captionCell;
@end
