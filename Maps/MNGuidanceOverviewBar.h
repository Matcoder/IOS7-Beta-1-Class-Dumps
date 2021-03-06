/* MNGuidanceOverviewBar.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "MNNavigationOverviewBar.h"
#import "Maps-Structs.h"
#import "MNGuidanceDisplay.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface MNGuidanceOverviewBar : MNNavigationOverviewBar <MNGuidanceDisplay> {
	float _availableWidth;
	NSString* _destinationDisplayName;
	int _guidanceState;
	double _timeIntervalToDestination;
	double _distanceToDestination;
}
@property(copy, nonatomic) NSString* destinationDisplayName;
-(void)hideSecondaryManeuver;
-(void)showSecondaryManeuver:(int)maneuver junction:(id)junction instructions:(id)instructions shorterAlternativeInstructions:(id)instructions4 shieldType:(int)type shieldText:(id)text drivingSide:(int)side signColor:(int)color;
-(void)setTimeToManeuver:(double)maneuver distanceToManeuver:(double)maneuver2;
-(void)showManeuverAlertForAnnouncementStage:(int)announcementStage;
-(void)showNewManeuver:(int)maneuver junction:(id)junction instructions:(id)instructions shorterAlternativeInstructions:(id)instructions4 shieldType:(int)type shieldText:(id)text drivingSide:(int)side signColor:(int)color;
-(void)showProceedingToRouteDistance:(double)routeDistance displayString:(id)string signColor:(int)color;
-(void)showRecalculationFailedWithSignColor:(int)signColor;
-(void)showRecalculatingWithSignColor:(int)signColor;
-(void)resetForNewReceivedRoute;
-(void)showArrived;
-(void)showNoGuidance;
-(void)setTotalRemainingTime:(double)time remainingDistance:(double)distance;
-(void)_updateEstimatesDisplay;
-(void)setShowsDimmedDisplay:(BOOL)display animation:(id)animation;
-(void)topBarSizeWillChange:(CGSize)topBarSize;
-(void)dealloc;
-(id)init;
@end
