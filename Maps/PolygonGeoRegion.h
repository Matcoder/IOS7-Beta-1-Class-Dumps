/* PolygonGeoRegion.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "Maps-Structs.h"
#import "GeoJSONCoverageRegion.h"


__attribute__((visibility("hidden")))
@interface PolygonGeoRegion : XXUnknownSuperclass <GeoJSONCoverageRegion> {
	XXStruct_gLbvpC* _polygon;
	unsigned _vertexCount;
}
-(BOOL)_loadWithJSONObject:(id)jsonobject error:(id*)error;
-(void)dealloc;
-(BOOL)coordinateLiesInRegion:(XXStruct_gLbvpC)region;
-(id)initWithJSONObject:(id)jsonobject error:(id*)error;
@end