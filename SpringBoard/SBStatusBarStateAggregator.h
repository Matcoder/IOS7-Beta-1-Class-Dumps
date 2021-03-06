/* SBStatusBarStateAggregator.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"

@class NSArray, NSString, NSTimer, NSHashTable, NSDateFormatter;

__attribute__((visibility("hidden")))
@interface SBStatusBarStateAggregator : XXUnknownSuperclass {
	unsigned _coalescentBlockDepth;
	BOOL _hasPostedOnce;
	unsigned _itemPostState[25];
	XXStruct_qJXVGC _data;
	int _actions;
	NSHashTable* _postObservers;
	BOOL _notifyingPostObservers;
	NSDateFormatter* _timeItemDateFormatter;
	NSTimer* _timeItemTimer;
	NSString* _timeItemTimeString;
	NSString* _operatorName;
	NSString* _serviceString;
	NSString* _serviceCrossfadeString;
	NSString* _serviceImages[2];
	NSString* _operatorDirectory;
	NSArray* _countryCodesShowingEmergencyOnlyStatus;
	BOOL _showsActivityIndicatorOnHomeScreen;
	int _activityIndicatorEverywhereCount;
	BOOL _showsActivityIndicatorForNewsstand;
	int _syncActivityIndicatorCount;
	NSString* _activityDisplayIdentifier;
	BOOL _showingNotChargingItem;
	NSString* _batteryDetailString;
	BOOL _alarmEnabled;
	BOOL _applyingAssistantStyle;
}
+(int)_thermalColorForLevel:(int)level;
+(id)sharedInstance;
-(void)_noteNotChargingStatusChanged;
-(void)_setShowingNotChargingItem;
-(BOOL)_shouldShowNotChargingItem;
-(BOOL)_shouldShowEmergencyOnlyStatus;
-(BOOL)_getServiceImageNames:(id [2])names directory:(id*)directory forOperator:(id)anOperator statusBarCarrierName:(id*)name;
-(id)_displayStringForRegistrationStatus:(int)registrationStatus;
-(id)_displayStringForSIMStatus:(id)simstatus;
-(BOOL)_simStatusMeansLocked:(id)locked;
-(void)_noteAirplaneModeChanged;
-(void)_resetTimeItemFormatter;
-(void)_restartTimeItemTimer;
-(void)_stopTimeItemTimer;
-(void)_requestActions:(int)actions;
-(void)_notifyItemChanged:(int)changed;
-(BOOL)_setItem:(int)item enabled:(BOOL)enabled;
-(void)_postItem:(int)item withState:(unsigned)state;
-(void)updateStatusBarItem:(int)item;
-(void)_updateThermalColorItem;
-(void)_updateAssistantItem;
-(void)_updateAirplayItem;
-(void)_updateQuietModeItem;
-(void)_updateRotationLockItem;
-(void)_updateLocationItem;
-(void)_updateActivityItem;
-(void)_updateCallForwardingItem;
-(void)_updateVPNItem;
-(void)_updateAlarmItem;
-(void)_updateTTYItem;
-(void)_updateBluetoothBatteryItem;
-(void)_updateBluetoothItem;
-(void)_updateBatteryItems;
-(void)_updateDataNetworkItem;
-(void)_updateServiceItem;
-(void)_updateSignalStrengthItem;
-(void)_updateAirplaneMode;
-(void)_updateTimeItems;
-(void)_registerForNotifications;
-(void)removePostingObserver:(id)observer;
-(void)addPostingObserver:(id)observer;
-(void)sendStatusBarActions:(int)actions;
-(void)setShowsSyncActivityIndicator:(BOOL)indicator;
-(void)setShowsActivityIndicatorForNewsstand:(BOOL)newsstand;
-(void)setShowsActivityIndicatorEverywhere:(BOOL)everywhere;
-(void)setShowsActivityIndicatorOnHomeScreen:(BOOL)screen;
-(void)setAlarmEnabled:(BOOL)enabled;
-(id)operatorName;
-(void)endCoalescentBlock;
-(void)beginCoalescentBlock;
-(void)dealloc;
-(id)init;
@end
