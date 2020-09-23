//
//  AppDelegate.h
//  AnimationDemo
//
//  Created by admin on 2018/3/26.
//  Copyright © 2018年 admin. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TitleButton : UIButton

/**
 *  初始化按钮
 *
 *  @param frame frame
 *  @param title 标题
 *
 *  @return 按钮对象
 */
-(instancetype)initWithFrame:(CGRect)frame withTitle:(NSString *)title;

@end
