//
//  SliderView.h
//  SlideShowScrollView
//
//  Created by HuHeng on 16/6/12.
//  Copyright © 2016年 HuHeng HuHeng. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void (^scrollerviewclick)(NSInteger index);

@class SliderView;

@protocol SliderViewDelegate <NSObject>

@optional

- (void)sliderView:(SliderView *)sliderView didSelectedItemAtIndex:(NSInteger)index;

@end

@interface SliderView : UIView

/**
 图片跳转 遵循代理SliderViewDelegate
 */
@property (nonatomic, weak) id<SliderViewDelegate>delegate;

#warning 使用 <SliderViewDelegate> 替代block
@property(copy,nonatomic)scrollerviewclick  scrollerviewclickBlock;

/**
 *  存储图片 数组
 */
@property (nonatomic, strong) NSArray *imageArray;

/**
 *  动画切换的时间间隔
 */
@property (nonatomic, assign) NSTimeInterval timeInterval;

/**
 *  图片数组为空时，请给出默认底图
 */
@property (nonatomic, copy) NSString *defaultImg;

/**
 * 刷新数据
 */
- (void)reloadData;


@end
