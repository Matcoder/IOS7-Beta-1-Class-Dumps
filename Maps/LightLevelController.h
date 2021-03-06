/* LightLevelController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "MKLocationManagerObserver.h"
#import "MKAmbientLightMonitorObserver.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSTimer, CLLocation, NSMapTable;

__attribute__((visibility("hidden")))
@interface LightLevelController : XXUnknownSuperclass <MKAmbientLightMonitorObserver, MKLocationManagerObserver> {
	int _currentLightLevel;
	NSMapTable* _observers;
	BOOL _automaticDetectionEnabled;
	BOOL _isObservingAmbientLight;
	BOOL _debugAmbientLightMonitorEnabled;
	int _ambientLightLevel;
	BOOL _debugAstronomicalCalculationEnabled;
	CLLocation* _location;
	BOOL _shouldUpdateTimer;
	NSTimer* _levelChangeTimer;
	BOOL _debugSimulateLowLighting;
	BOOL _debugAlwaysReportRegularLevel;
}
@property(assign, nonatomic) BOOL debugAlwaysReportRegularLevel;
@property(assign, nonatomic) BOOL debugAstronomicalCalculationEnabled;
@property(assign, nonatomic) BOOL debugAmbientLightMonitorEnabled;
@property(assign, nonatomic) BOOL debugSimulateLowLighting;
@property(assign, nonatomic) BOOL automaticDetectionEnabled;
@property(readonly, assign, nonatomic) int currentLightLevel;
-(void)locationManagerDidResumeLocationUpdates:(id)locationManager;
-(void)locationManagerDidPauseLocationUpdates:(id)locationManager;
-(BOOL)locationManagerShouldPauseLocationUpdates:(id)locationManager;
-(void)locationManagerDidReset:(id)locationManager;
-(void)locationManagerFailedToUpdateLocation:(id)updateLocation withError:(id)error;
-(void)locationManagerUpdatedLocation:(id)location;
-(void)ambientLightMonitorUpdated:(id)updated;
-(void)_timerFiredForLightLevelChange;
-(void)_scheduleTimerForTimeInterval:(double)timeInterval;
-(void)_setCurrentLightLevel:(int)level;
-(void)_update;
-(void)_updateExternalAccessory:(id)accessory;
-(int)_updateFromLocationAndScheduleTimer;
-(int)_updateFromAmbientLight;
-(void)removeObserver:(id)observer;
-(void)addObserver:(id)observer changeHandler:(id)handler;
-(BOOL)_getLightLevelFromConnectedCar:(int*)connectedCar;
-(void)dealloc;
-(id)init;
@end
