//
//  OPTKStaticHelper.h
//  Pods
//
//  Created by Pawit Khid-arn on 2/15/2558 BE.
//
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface OPTKStaticHelper : NSObject

+ (UIImageView *)imageViewWithWidth:(CGFloat)width andHeight:(CGFloat)height;
+ (UIImage *)imageWithWidth:(CGFloat)width andHeight:(CGFloat)height andColor:(UIColor *)color;
+ (UIColor *)colorWithHexString:(NSString *)hex;
+ (NSBundle *)getOptokBundle;
+ (UIImage *)getImageWithName:(NSString *)imageName;

@end
