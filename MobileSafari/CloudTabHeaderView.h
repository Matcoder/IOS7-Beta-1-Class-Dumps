/* CloudTabHeaderView.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "MobileSafari-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, UIView, UILabel, UIImageView;

__attribute__((visibility("hidden")))
@interface CloudTabHeaderView : XXUnknownSuperclass {
	UILabel* _label;
	UIImageView* _icon;
	UIView* _separatorView;
}
@property(copy, nonatomic) NSString* text;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)fits;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end
