//
//  AppDelegate.h
//  AnimationDemo
//
//  Created by admin on 2018/3/26.
//  Copyright © 2018年 admin. All rights reserved.
//

#import "ViewController.h"
#import "TitleButton.h"

@interface BaseViewController : ViewController

/**
 *  当前Controller的标题
 *
 *  @return 标题
 */
-(NSString *)controllerTitle;

/**
 *  初始化View
 */
-(void)initView;

/**
 *  按钮操作区的数组元素
 *
 *  @return 数组
 */
-(NSArray *)operateTitleArray;

/**
 *  每个按钮的点击时间
 *
 *  @param btn 
 */
-(void)clickBtn : (UIButton *)btn;

@end
