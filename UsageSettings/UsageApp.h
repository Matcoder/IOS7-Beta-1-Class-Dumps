/* UsageApp.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface UsageApp : XXUnknownSuperclass {
	NSString* _name;
	NSString* _bundleIdentifier;
	NSString* _bundleVersion;
	float _staticSize;
	float _dynamicSize;
	float _specialSize;
}
@property(readonly, assign, nonatomic) float totalSize;
@property(readonly, assign, nonatomic) float dataSize;
@property(assign, nonatomic) float specialSize;
@property(assign, nonatomic) float dynamicSize;
@property(assign, nonatomic) float staticSize;
@property(retain, nonatomic) NSString* bundleVersion;
@property(retain, nonatomic) NSString* bundleIdentifier;
@property(retain, nonatomic) NSString* name;
@end
