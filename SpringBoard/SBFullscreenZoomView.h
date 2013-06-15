/* SBFullscreenZoomView.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBZoomView.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface SBFullscreenZoomView : SBZoomView {
	BOOL _hasImage;
	BOOL _hasFullSizedImage;
	int _corners;
	NSMutableArray* _cornerViews;
}
-(void)setRoundedCorners:(int)corners withCornersFrame:(CGRect)cornersFrame;
-(void)dealloc;
-(id)initWithView:(id)view screen:(id)screen;
-(id)initWithImage:(id)image screen:(id)screen;
-(id)initWithSnapshotFrame:(CGRect)snapshotFrame screen:(id)screen ioSurface:(void*)surface snapshotTransform:(CGAffineTransform)transform;
-(id)initWithSnapshotFrame:(CGRect)snapshotFrame screen:(id)screen image:(id)image originalImageOrientation:(int)orientation currentImageOrientation:(int)orientation5 interfaceOrientation:(int)orientation6 doubleHeightStatusBar:(BOOL)bar preventSplit:(BOOL)split chrome:(id)chrome chromeStatusBarHidden:(BOOL)hidden needsZoomFilter:(BOOL)filter asyncDecodeImage:(BOOL)image12;
-(id)_initWithFrame:(CGRect)frame;
@end