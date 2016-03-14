//
//  DetailViewController.h
//  first_stepsApp
//
//  Created by Pablo Clement on 14/03/2016.
//  Copyright © 2016 Pablo Clement. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

