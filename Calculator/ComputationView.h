/* ComputationView.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "Calculator-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UITextView;
@protocol ComputationViewDelegate;

__attribute__((visibility("hidden")))
@interface ComputationView : XXUnknownSuperclass {
	id<ComputationViewDelegate> _delegate;
	UITextView* _upperTextView;
	UITextView* _lowerTextView;
}
@property(readonly, assign, nonatomic) UITextView* lowerTextView;
@property(readonly, assign, nonatomic) UITextView* upperTextView;
@property(assign, nonatomic) id<ComputationViewDelegate> delegate;
-(void)handleTap:(id)tap;
-(void)setUpperText:(id)text lowerText:(id)text2;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end