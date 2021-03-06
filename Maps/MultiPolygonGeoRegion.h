/* MultiPolygonGeoRegion.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "GeoJSONCoverageRegion.h"
#import "Maps-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray;

__attribute__((visibility("hidden")))
@interface MultiPolygonGeoRegion : XXUnknownSuperclass <GeoJSONCoverageRegion> {
	NSArray* _polygons;
}
@property(retain, nonatomic) NSArray* polygons;
-(BOOL)_loadWithJSONObject:(id)jsonobject error:(id*)error;
-(BOOL)_loadWithRootJSONObject:(id)rootJSONObject error:(id*)error;
-(BOOL)coordinateLiesInRegion:(XXStruct_gLbvpC)region;
-(id)initWithJSONObject:(id)jsonobject error:(id*)error;
-(void)dealloc;
-(id)initWithContentsOfFile:(id)file error:(id*)error;
@end
