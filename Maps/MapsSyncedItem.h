/* MapsSyncedItem.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSDictionary, MapsSyncManager, NSString;
@protocol MapsSynced;

__attribute__((visibility("hidden")))
@interface MapsSyncedItem : XXUnknownSuperclass {
	MapsSyncManager* _manager;
	id<MapsSynced> _clientItem;
	NSString* _identifier;
	double _position;
}
@property(readonly, assign, nonatomic) NSDictionary* cloudData;
@property(readonly, assign, nonatomic) NSString* cloudKey;
@property(readonly, assign, nonatomic) unsigned clientPosition;
@property(assign, nonatomic) double position;
@property(copy, nonatomic) NSString* identifier;
@property(retain, nonatomic) id<MapsSynced> clientItem;
@property(assign, nonatomic) MapsSyncManager* manager;
+(double)positionBetweenItem:(id)item andItem:(id)item2;
-(id)description;
-(BOOL)updateFromCloudData:(id)cloudData newlyCreated:(BOOL)created positionChanged:(BOOL*)changed;
-(BOOL)updateFromSyncData:(id)syncData;
-(id)syncData;
-(void)dealloc;
-(id)initWithManager:(id)manager;
@end
