//
//  NWDetailTaskViewController.m
//  Task
//
//  Created by Nicholas Wargnier on 11/4/13.
//  Copyright (c) 2013 Nicholas Wargnier. All rights reserved.
//

#import "NWDetailTaskViewController.h"

@interface NWDetailTaskViewController ()

@end

@implementation NWDetailTaskViewController

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
    self.titleLabel.text = self.task.title;
    self.detailLabel.text = self.task.description;
    
    NSDateFormatter *formatter = [[NSDateFormatter alloc] init];
    [formatter setDateFormat:@"yyyy-MM-dd"];
    NSString *dateString = [formatter stringFromDate:self.task.date];
    
    self.dateLabel.text = dateString;
    
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (IBAction)editBarButtonItemPressed:(UIBarButtonItem *)sender {
}
@end
