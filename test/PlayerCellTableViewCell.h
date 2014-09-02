//
//  PlayerCellTableViewCell.h
//  test
//
//  Created by kyy on 14-7-15.
//  Copyright (c) 2014年 kouyuyi. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PlayerCellTableViewCell : UITableViewCell

@property (nonatomic, weak) IBOutlet UILabel *nameLabel;
@property (nonatomic, weak) IBOutlet UILabel *gameLabel;
@property (nonatomic, weak) IBOutlet UIImageView *ratingImageView;

@end
