//
//  OPTKExpandingAdViewController.h
//  OptokAdLib
//
//  Created by Pawit Khid-arn on 2/22/2558 BE.
//  Copyright (c) 2558 OPTok Co., Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "OPTKAdViewController.h"
#import "OPTKDetailViewController.h"

@interface OPTKExpandingAdViewController : OPTKAdViewController

@property(nonatomic,assign) enum OPTKAdPosition position;
@property(nonatomic,assign) CGFloat height;
@property(strong,nonatomic) UIView *shareReplayControlView;
@property(strong,nonatomic) UIButton *moreDetailButton;
@property(strong,nonatomic) UIButton *replayButton;
@property(strong,nonatomic) UIButton *shareButton;
@property(assign) BOOL showingShareReplayControlView;
@property(strong,nonatomic) OPTKDetailViewController *detailViewController;

- (id)initWithUid:(NSString *)UidString andSpotId:(NSString *)SpotIdString withPosition:(enum OPTKAdPosition)position andHeight:(CGFloat)height __attribute__((deprecated));
- (id)initWithUid:(NSString *)UidString andSpotId:(NSString *)SpotIdString withPosition:(enum OPTKAdPosition)position __attribute__((deprecated));

- (id)initWithSlotName:(NSString *)slotName withPosition:(enum OPTKAdPosition)position;
@end
