//
//  HXPhotoBrowserViewController.h
//  HXPhotoBrowser
//
//  Created by suin on 2018/8/15.
//  Copyright © 2018年 韩旭. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HXPhotoBrowserViewController : UIViewController

///Parent ViewController
@property (nonatomic, strong) UIViewController *parentVC;
///Image URL (NSString)
@property (nonatomic, strong) NSArray <NSString *>*urlStrArray;
///UIButton or UIImageView
@property (nonatomic, strong) NSArray <UIView *>*selectedViewArray;
///Default 0
@property (nonatomic, assign) NSInteger currentIndex;

///Go
- (void)show;

@end
