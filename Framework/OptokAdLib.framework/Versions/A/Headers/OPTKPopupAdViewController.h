//
//  OPTKPopupAdViewController.h
//  OptokAdLib
//
//  Created by Pawit Khid-arn on 2/22/2558 BE.
//  Copyright (c) 2558 OPTok Co., Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "OPTKAdViewController.h"

@interface OPTKPopupAdViewController : OPTKAdViewController

@property(strong,nonatomic) UIView *backgroundView;
@property(strong,nonatomic) UIView *tintedView;
@property(strong,nonatomic) UIButton *closeButton;
@property(strong,nonatomic) UIButton *share;
@property(strong,nonatomic) UIButton *moreDetail;
@property(strong,nonatomic) UIView *shareReplayControlView;
@property(strong,nonatomic) UIButton *replayButton;
@property(assign) BOOL showingShareReplayControlView;

- (id)initWithUid:(NSString *)UidString andSpotId:(NSString *)SpotIdString __attribute__((deprecated));

- (id)initWithSlotName:(NSString *)slotName;

@end
