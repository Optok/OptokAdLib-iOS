//
//  OPTKFloatingAdViewController.h
//  OptokAdLib
//
//  Created by Pawit Khid-arn on 2/16/2558 BE.
//  Copyright (c) 2558 OPTok Co., Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "OPTKAdViewController.h"

@interface OPTKFloatingAdViewController : OPTKAdViewController

@property(assign) CGFloat height;
@property(assign) enum OPTKAdPosition position;
@property(strong,nonatomic) UIView *shareReplayControlView;
@property(strong,nonatomic) UIButton *moreDetailButton;
@property(strong,nonatomic) UIButton *replayButton;
@property(strong,nonatomic) UIButton *shareButton;
@property(assign) BOOL showingShareReplayControlView;

- (id)initWithUid:(NSString *)UidString andSpotId:(NSString *)SpotIdString withPosition:(enum OPTKAdPosition)position andHeight:(CGFloat)height __attribute__((deprecated));
- (id)initWithUid:(NSString *)UidString andSpotId:(NSString *)SpotIdString withPosition:(enum OPTKAdPosition)position __attribute__((deprecated));

- (id)initWithSlotName:(NSString *)slotName withPosition:(enum OPTKAdPosition)position;

@end
