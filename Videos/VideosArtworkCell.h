/* VideosArtworkCell.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "Videos-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIButton, UIView, VideosUnplayedBadge, MPMediaItemImageRequest, NSString, UIImageView;
@protocol VideosArtworkCellDelegate;

__attribute__((visibility("hidden")))
@interface VideosArtworkCell : XXUnknownSuperclass {
	MPMediaItemImageRequest* _imageRequest;
	CGRect _normalFrame;
	UIButton* _deleteButton;
	VideosUnplayedBadge* _unplayedBadge;
	UIImageView* _cloudView;
	BOOL _editing;
	BOOL _cloud;
	UIImageView* _artworkView;
	id<VideosArtworkCellDelegate> _delegate;
	NSString* _title;
	unsigned _unplayedCount;
	UIView* _highlightView;
	CGSize _maxArtworkSize;
}
@property(retain, nonatomic) UIView* highlightView;
@property(assign, nonatomic) BOOL cloud;
@property(assign, nonatomic) unsigned unplayedCount;
@property(copy, nonatomic) NSString* title;
@property(assign, nonatomic, getter=isEditing) BOOL editing;
@property(assign, nonatomic) __weak id<VideosArtworkCellDelegate> delegate;
@property(assign, nonatomic) CGSize maxArtworkSize;
@property(readonly, assign, nonatomic) UIImageView* artworkView;
-(void).cxx_destruct;
-(void)_addCloudView;
-(void)_deleteButtonPressed:(id)pressed;
-(void)setEditing:(BOOL)editing animated:(BOOL)animated;
-(void)setArtworkImage:(id)image;
-(void)loadImageWithRequest:(id)request inCache:(id)cache;
-(BOOL)pointInside:(CGPoint)inside withEvent:(id)event;
-(void)applyLayoutAttributes:(id)attributes;
-(void)setHighlighted:(BOOL)highlighted;
-(void)prepareForReuse;
-(void)layoutSubviews;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end
