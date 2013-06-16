/* UsageController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSDate, CloudStorageGroupController, PSSpecifier, NSTimer, NSString, NSMutableArray;

__attribute__((visibility("hidden")))
@interface UsageController : XXUnknownSuperclass {
	int _fullyChargedToken;
	int _pluggedInToken;
	int _isCharged;
	int _isPlugged;
	float _standbySeconds;
	float _usageSeconds;
	BOOL _trusted;
	PSSpecifier* _textSpecifier;
	PSSpecifier* _usageSpecifier;
	PSSpecifier* _standbySpecifier;
	NSTimer* _timer;
	NSString* _notTrustedString;
	NSString* _chargingString;
	NSMutableArray* _storageSpecifiers;
	NSDate* _storageExpiry;
	double _timeoutLimit;
	BOOL _showingAllStorage;
	BOOL _storageLookupInProgress;
	PSSpecifier* _storageGroup;
	PSSpecifier* _musicSpecifier;
	PSSpecifier* _videoSpecifier;
	PSSpecifier* _photosSpecifier;
	PSSpecifier* _storageShowAll;
	CloudStorageGroupController* _cloudGroup;
}
-(id)specifiers;
-(void)showAllStorage;
-(void)removeStorageSpecifier:(id)specifier;
-(id)storageSpecifiers;
-(Class)usageDetailControllerForBundleID:(id)bundleID;
-(id)appSize:(id)size;
-(void)addStorageSpecifiers:(id)specifiers;
-(void)reloadSpecifiers;
-(id)_storageGroupSpecifier;
-(id)standbyElapsed:(id)elapsed;
-(id)usageElapsed:(id)elapsed;
-(void)dealloc;
-(id)init;
-(void)prepareForSnapshot;
-(void)foregrounded;
-(void)backgrounded;
-(void)viewWillAppear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
-(void)didUnlock;
-(void)didLock;
-(void)update:(id)update;
-(void)updateUI:(BOOL)ui;
-(void)stopTimer;
-(void)startTimer;
-(void)_fullyChargedStateChanged;
-(void)_pluggedInStateChanged;
@end