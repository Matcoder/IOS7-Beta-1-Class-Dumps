/* KeypadView.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "Calculator-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "BasicKeypadDelegate.h"

@protocol KeypadDelegate;

__attribute__((visibility("hidden")))
@interface KeypadView : XXUnknownSuperclass <BasicKeypadDelegate> {
	id<KeypadDelegate> _delegate;
}
@property(assign, nonatomic) id<KeypadDelegate> delegate;
-(void)basicKeypadKeyTapped:(int)tapped;
-(id)initWithFrame:(CGRect)frame;
@end
