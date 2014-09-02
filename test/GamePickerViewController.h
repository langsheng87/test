//
//  GamePickerViewController.h
//  test
//
//  Created by kyy on 14-7-15.
//  Copyright (c) 2014年 kouyuyi. All rights reserved.
//

#import <UIKit/UIKit.h>
@class GamePickerViewController;

@protocol GamePickerViewControllerDelegate <NSObject>
- (void)gamePickerViewController:(GamePickerViewController *)controller didSelectGame:(NSString *)game;
@end

@interface GamePickerViewController : UITableViewController

@property (nonatomic, weak) id <GamePickerViewControllerDelegate> delegate;
@property (nonatomic, strong) NSString *game;

@end
