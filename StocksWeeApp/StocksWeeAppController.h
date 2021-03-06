/* StocksWeeAppController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "StocksWeeApp-Structs.h"
#import <SpringBoardUIServices/_SBUIWidgetViewController.h>

@class StocksWeeAppListView, NSTimer;

@interface StocksWeeAppController : _SBUIWidgetViewController {
	StocksWeeAppListView* _weeAppView;
	BOOL _isReachable;
	BOOL _stocksLoaded;
	NSTimer* _updateStockDataTimer;
}
-(void).cxx_destruct;
-(id)launchURLForTapLocation:(CGPoint)tapLocation;
-(id)_weeAppView;
-(void)hostDidPresent;
-(void)hostDidDismiss;
-(void)unloadView;
-(CGSize)preferredViewSize;
-(void)_showAllChanged:(id)changed;
-(void)_initStockData;
-(void)_reachabilityChanged:(id)changed;
-(void)_updateStockData;
-(void)_startUpdateTimer;
-(void)_stopUpdateTimer;
-(id)initWithNibName:(id)nibName bundle:(id)bundle;
@end
