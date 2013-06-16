/* StarkRouteGeniusView.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "Maps-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIImageView, UIView, StarkSizedPageView;

__attribute__((visibility("hidden")))
@interface StarkRouteGeniusView : XXUnknownSuperclass {
	UIImageView* _leftArrowImageView;
	UIImageView* _rightArrowImageView;
	UIView* _contentView;
	StarkSizedPageView* _pageIndicatorView;
	int _interactionModel;
}
@property(assign, nonatomic) int interactionModel;
@property(readonly, assign, nonatomic) StarkSizedPageView* pageIndicatorView;
@property(retain, nonatomic) UIView* contentView;
-(void)layoutSubviews;
-(void)_willChangeToIdiom:(int)idiom onScreen:(id)screen;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end