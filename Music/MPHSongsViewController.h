/* MPHSongsViewController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "MusicTableViewController.h"
#import "Music-Structs.h"


__attribute__((visibility("hidden")))
@interface MPHSongsViewController : MusicTableViewController {
	BOOL _hasShuffleActionRow;
}
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(Class)tableView:(id)view prefixActionCellConfigurationAtIndex:(int)index;
-(int)numberOfPrefixActionRowsInTableView:(id)tableView;
-(void)reloadData;
@end