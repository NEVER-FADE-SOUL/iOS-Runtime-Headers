/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@class GKPlayer, NSString, UIImage;

@interface GKPlayerPhotoView : UIImageView <GKPlayerPhotoContainer> {
    UIImage *_actualImage;
    long long _onAdaptiveBackground;
    GKPlayer *_player;
    bool_selected;
}

@property(retain) UIImage * actualImage;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(getter=isOnAdaptiveBackground) long long onAdaptiveBackground;
@property(retain) GKPlayer * player;
@property bool selected;
@property(readonly) Class superclass;

+ (void)initialize;

- (id)actualImage;
- (void)dealloc;
- (id)image;
- (void)invalidateIntrinsicContentSize;
- (long long)isOnAdaptiveBackground;
- (id)player;
- (void)refreshPhoto;
- (void)refreshPhotoWithCompletionHandler:(id)arg1;
- (bool)selected;
- (void)setActualImage:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setImage:(id)arg1;
- (void)setOnAdaptiveBackground:(long long)arg1;
- (void)setPlayer:(id)arg1;
- (void)setSelected:(bool)arg1;

@end