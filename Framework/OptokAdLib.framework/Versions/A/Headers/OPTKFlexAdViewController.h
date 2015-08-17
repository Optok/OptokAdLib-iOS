//
//  OPTKFlexAdViewController.h
//  OptokAdLib
//
//  Created by Pawit Khid-arn on 2/22/2558 BE.
//  Copyright (c) 2558 OPTok Co., Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "OPTKAdViewController.h"

@interface OPTKFlexAdViewController : OPTKAdViewController

@property(nonatomic,assign) CGRect frame;
@property(strong,nonatomic) UIView *backgroundView;
@property(strong,nonatomic) UIButton *closeButton;
@property(strong,nonatomic) UIView *shareReplayControlView;
@property(strong,nonatomic) UIButton *moreDetailButton;
@property(strong,nonatomic) UIButton *replayButton;
@property(strong,nonatomic) UIButton *shareButton;
@property(assign) BOOL showingShareReplayControlView;

- (id)initWithUid:(NSString *)UidString andSpotId:(NSString *)SpotIdString withFrame:(CGRect)frame __attribute__((deprecated));

- (id)initWithSlotName:(NSString *)slotName withFrame:(CGRect)frame;

@end
