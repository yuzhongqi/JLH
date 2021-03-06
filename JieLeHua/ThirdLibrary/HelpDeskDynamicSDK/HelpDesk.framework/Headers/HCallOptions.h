//
//  HCallOptions.h
//  helpdesk_sdk
//
//  Created by afanda on 3/15/17.
//  Copyright © 2017 hyphenate. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HCallEnum.h"

/**
 发布流的时候己方视频状态
 */
@interface HCallOptions : NSObject

/**
 是否关闭摄像头
 */
@property (nonatomic, assign) BOOL videoOff;

/**
 是否静音
 */
@property (nonatomic, assign) BOOL mute;

/**
 预览视频
 */
@property (nonatomic, strong) HCallLocalView * previewView;

@end
