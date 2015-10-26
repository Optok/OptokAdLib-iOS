//
//  OPTKMoviePlayerViewController.h
//  OptokAdLib
//
//  Created by Pawit Khid-arn on 10/16/2558 BE.
//  Copyright © 2558 OPTok Co., Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <MediaPlayer/MediaPlayer.h>
#import <AVFoundation/AVFoundation.h>

#define NORMAL_VOLUME 0.3
#define MUTE_VOLUME 0.0

@class OPTKMoviePlayerViewController;

@protocol OPTKMoviePlayerDelegate
@optional
-(void)playerViewZoomButtonClicked:(OPTKMoviePlayerViewController*)view;
-(void)playerFinishedPlayback:(OPTKMoviePlayerViewController*)view;

@end

@interface OPTKMoviePlayerViewController : UIViewController

@property (assign, nonatomic) id<OPTKMoviePlayerDelegate> delegate;
@property (assign, nonatomic) BOOL fullscreen;
@property (assign, nonatomic) BOOL shouldAutoplay;
@property (retain, nonatomic) NSURL *contentURL;
@property (retain, nonatomic) AVPlayer *moviePlayer;
@property (retain, nonatomic) AVPlayerLayer *moviePlayerLayer;
@property (assign, nonatomic) NSInteger playbackState;
@property (assign, nonatomic) NSInteger controlStyle;
@property (assign, nonatomic) NSInteger loadState;
@property (nonatomic) float duration;
@property (nonatomic) float currentPlaybackTime;
@property (assign, nonatomic) float endPlaybackTime;
@property (strong, nonatomic) NSArray *audioTracks;
@property (strong, nonatomic) AVURLAsset *avUrlAsset;
@property (strong, nonatomic) AVPlayerItem *avPlayerItem;

- (id)initWithContentURL:(NSURL *)url;
- (void)prepareToPlay;
- (void)play;
- (void)replay;
- (void)pause;
- (void)stop;
- (void)setCurrentPlaybackTime:(float)time;
- (void)setMute:(BOOL)mute;
- (void)setFullscreen:(BOOL)fullscreen animated:(BOOL)animated;

@end
