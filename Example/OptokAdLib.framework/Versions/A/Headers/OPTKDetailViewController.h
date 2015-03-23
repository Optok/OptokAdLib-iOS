//
//  OPTKDetailViewController.h
//  OptokAdLib
//
//  Created by Pawit Khid-arn on 2/25/2558 BE.
//  Copyright (c) 2558 OPTok Co., Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MediaPlayer/MediaPlayer.h>
#import "OPTKAd.h"

@interface OPTKDetailViewController : UIViewController

@property(strong,nonatomic) MPMoviePlayerController *videoPlayer;
@property(strong,nonatomic) NSString *titleText;
@property(strong,nonatomic) NSString *urlText;
@property(strong,nonatomic) NSString *getMoreDetailText;
@property(strong,nonatomic) NSString *descriptionText;
@property(strong,nonatomic) UIButton *getMoreDetailButton;
@property(strong,nonatomic) OPTKAd *ad;

- (id)initWithAd:(OPTKAd *)ad;

@end
