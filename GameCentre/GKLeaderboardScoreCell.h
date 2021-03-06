/* GKLeaderboardScoreCell.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "GameCentre-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class GKScore, GKPlayerPhotoView, GKLabel;

__attribute__((visibility("hidden")))
@interface GKLeaderboardScoreCell : XXUnknownSuperclass {
	BOOL _isAchievementCell;
	GKPlayerPhotoView* _iconView;
	GKLabel* _nameLabel;
	GKLabel* _scoreLabel;
	GKLabel* _rankLabel;
}
@property(retain, nonatomic) GKLabel* rankLabel;
@property(retain, nonatomic) GKLabel* scoreLabel;
@property(retain, nonatomic) GKLabel* nameLabel;
@property(retain, nonatomic) GKPlayerPhotoView* iconView;
@property(assign, nonatomic) BOOL isAchievementCell;
@property(retain, nonatomic) GKScore* score;
+(float)defaultShowcaseRowHeight;
+(float)defaultRowHeight;
-(BOOL)canRemoveItem;
-(void)prepareForReuse;
-(void)didUpdateModel;
-(void)setRepresentedItem:(id)item;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
-(void)initialContraints;
@end
