//
//  DetailViewController.h
//  Food Diary
//
//  Created by Pink Pegasus on 8/30/15.
//  Copyright (c) 2015 Sara Hender. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

