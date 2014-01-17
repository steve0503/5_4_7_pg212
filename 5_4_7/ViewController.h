//
//  ViewController.h
//  5_4_7
//
//  Created by SDT-1 on 2014. 1. 17..
//  Copyright (c) 2014년 steve. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <AVFoundation/AVFoundation.h>

@interface ViewController : UIViewController <UITableViewDelegate , UITableViewDataSource, AVAudioRecorderDelegate>

@property (weak, nonatomic) IBOutlet UITableView *table;

@property (weak, nonatomic) IBOutlet UILabel *status;


-(IBAction)toggleRecording:(id)sender;

@end
