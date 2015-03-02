//
//  OptokAdLib.h
//  OptokAdLib
//
//  Created by Pawit Khid-arn on 2/12/2558 BE.
//  Copyright (c) 2558 OPTok Co., Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MediaPlayer/MediaPlayer.h>

#import <AFNetworking.h>

//@class OPTKMediaViewController;

//@protocol OPTKMediaLoaderDelegate
//- (void)reloadMedia;
//- (void)attachVideoToView;
//- (void)attachBannerToView;
//@optional
//@end

@protocol OPTKAdViewerDelegate
- (void)addInitialMediaToView;
- (void)updateMainAdViewWithView:(UIView *)view;
- (void)setLayout;
@end

@interface OPTKAd : NSObject

enum OPTKAdPosition : NSUInteger {
    OPTKAdPositionTop = 1,
    OPTKAdPositionBottom = 2,
};

enum OPTKAdType : NSUInteger {
    OPTKAdTypeBanner = 1,
    OPTKAdTypeVideoPopup = 2,
    OPTKAdTypeVideoExpand = 3,
    OPTKAdTypeVideoBanner = 4
};

@property(strong,nonatomic) AFHTTPRequestOperationManager *manager;
@property(strong,nonatomic) NSString *uid;
@property(strong,nonatomic) NSString *spotId;
@property(strong,nonatomic) NSString *ip;
@property(nonatomic,assign) BOOL initSuccess;
@property(strong,nonatomic) NSDictionary *adConfig;

@property(nonatomic,assign) enum OPTKAdType adType;
@property(nonatomic,assign) BOOL adEnabled;
@property(nonatomic,assign) BOOL loadedBanner;
@property(nonatomic,assign) BOOL loadedVideo;

//@property(strong,nonatomic) id<OPTKMediaLoaderDelegate> mediaView;
@property(strong,nonatomic) id<OPTKAdViewerDelegate> adView;
@property(strong,nonatomic) UIImageView *bannerImageView;
@property(strong,nonatomic) MPMoviePlayerController *videoPlayer;

- (id)initWithUid:(NSString *)uidString andSpotId:(NSString *)spotIdString;
- (void)setupAd;
- (UIView *)getInitialMediaView;
- (UIView *)bannerView;
- (UIView *)videoView;

- (NSString *)title;
- (NSString *)description;
- (NSString *)landingUrlString;

- (void)trackStart;
- (void)trackStop;
- (void)trackClick;
- (void)trackImpression;
- (void)linkToUrl;

@end
