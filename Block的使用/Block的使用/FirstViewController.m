//
//  FirstViewController.m
//  Block的使用
//
//  Created by jiawei on 14-9-11.
//  Copyright (c) 2014年 eliteworkltd. All rights reserved.
//

#import "FirstViewController.h"

@interface FirstViewController ()

@end

@implementation FirstViewController

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    barkCount = 0;
    [NSTimer scheduledTimerWithTimeInterval:1.0 target:self selector:@selector(updateTime:) userInfo:nil repeats:YES];
}

- (void)updateTime:(id)arg{
    barkCount ++;
    NSLog(@"这里barkCount:%d",barkCount);
    if (_BarkCallback) {
        //调用从其它类传过来的BarkCallback
        _BarkCallback(self, barkCount);
        
    }
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}



@end
