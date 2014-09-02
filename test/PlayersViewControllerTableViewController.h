//
//  PlayersViewControllerTableViewController.h
//  test
//
//  Created by kyy on 14-7-15.
//  Copyright (c) 2014年 kouyuyi. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PlayerDetailsViewController.h"

@interface PlayersViewControllerTableViewController : UITableViewController <PlayerDetailsViewControllerDelegate>

@property (weak, nonatomic) IBOutlet UIButton *nextStoryBoardBtn;
@property (nonatomic, strong) NSMutableArray *players;

- (IBAction)nextStoryBoard:(id)sender;

@end
