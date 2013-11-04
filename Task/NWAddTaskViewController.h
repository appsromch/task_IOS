//
//  NWAddTaskViewController.h
//  Task
//
//  Created by Nicholas Wargnier on 11/4/13.
//  Copyright (c) 2013 Nicholas Wargnier. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "NWTask.h"
@protocol NWAddTaskViewControllerDelegate <NSObject>

-(void)didCancel;
-(void)didAddTask:(NWTask *)task;

@end

@interface NWAddTaskViewController : UIViewController

@property (weak, nonatomic) id <NWAddTaskViewControllerDelegate> delegate;

@property (strong, nonatomic) IBOutlet UITextField *textField;
@property (strong, nonatomic) IBOutlet UITextView *textView;
@property (strong, nonatomic) IBOutlet UIDatePicker *datePicker;

- (IBAction)addTaskButtonPressed:(UIButton *)sender;
- (IBAction)cancelButtonPressed:(UIButton *)sender;
@end
