/* VideosRentalTimeRemainingLabel.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "Videos-Structs.h"

@class NSTimer, VideosRentalData;

__attribute__((visibility("hidden")))
@interface VideosRentalTimeRemainingLabel : XXUnknownSuperclass {
	VideosRentalData* _rentalData;
	NSTimer* _refreshTimer;
}
-(void).cxx_destruct;
-(void)_setRefreshTimer;
-(void)_rentalDataDidLoad:(id)_rentalData;
-(void)setRentalData:(id)data;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end