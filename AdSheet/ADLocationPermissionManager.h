/* ADLocationPermissionManager.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class _ADLocationPermissionRequest, NSMutableArray, NSFileManager, NSURL, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface ADLocationPermissionManager : XXUnknownSuperclass {
	_ADLocationPermissionRequest* _currentRequest;
	NSMutableArray* _pendingRequests;
	NSObject<OS_dispatch_queue>* _dispatchQueue;
	NSURL* _cacheFile;
	NSMutableDictionary* _cache;
	NSFileManager* _fileManager;
}
@property(retain, nonatomic) NSFileManager* fileManager;
@property(retain, nonatomic) NSMutableDictionary* cache;
@property(retain, nonatomic) NSURL* cacheFile;
@property(assign, nonatomic) NSObject<OS_dispatch_queue>* dispatchQueue;
@property(retain, nonatomic) NSMutableArray* pendingRequests;
@property(retain, nonatomic) _ADLocationPermissionRequest* currentRequest;
+(void)clearPermissionCache;
+(void)cancelOutstandingRequests;
+(id)sharedManager;
+(void)allowLocationAccessForAdWithIdentifier:(id)identifier title:(id)title queue:(id)queue completionHandler:(id)handler;
-(void)_recordPermissionForAdWithIdentifier:(id)identifier;
-(BOOL)_hasPermissionForAdWithIdentifier:(id)identifier;
-(void)_enqueueRequestForAdWithIdentifier:(id)identifier title:(id)title queue:(id)queue completionHandler:(id)handler;
-(void)_checkPendingRequests;
-(void)_clearPermissionCache;
-(void)_cancelOutstandingRequests;
-(id)init;
@end