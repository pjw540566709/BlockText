//
//  FirstViewController.h
//  Block的使用
//
//  Created by jiawei on 14-9-11.
//  Copyright (c) 2014年 eliteworkltd. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FirstViewController : UIViewController{
    //定义一个blocks变量
    void (^BarkCallback) (FirstViewController *thisController, int count);
    
    NSInteger barkCount;
}

//thisController count 时参数
@property (nonatomic, copy) void (^BarkCallback) (FirstViewController *thisConttroller, int count);

@end
