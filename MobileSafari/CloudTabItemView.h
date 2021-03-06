/* CloudTabItemView.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "MobileSafari-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIView, CloudTab;

__attribute__((visibility("hidden")))
@interface CloudTabItemView : XXUnknownSuperclass {
	UIView* _separatorView;
	CloudTab* _cloudTab;
}
@property(assign, nonatomic) BOOL showsSeparator;
@property(retain, nonatomic) CloudTab* cloudTab;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)fits;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end
