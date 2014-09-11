//
//  SecondViewController.h
//  Block的使用
//
//  Created by jiawei on 14-9-11.
//  Copyright (c) 2014年 eliteworkltd. All rights reserved.
//

#import <UIKit/UIKit.h>
@class SecondViewController;

typedef void (^BarkCallBack) (SecondViewController *thisDog, int count);

@interface SecondViewController : UIViewController{
    NSInteger barkCount;
}

@property (nonatomic, copy) BarkCallBack completionHandler;

@end

