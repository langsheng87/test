//
//  PlayerCellTableViewCell.m
//  test
//
//  Created by kyy on 14-7-15.
//  Copyright (c) 2014年 kouyuyi. All rights reserved.
//

#import "PlayerCellTableViewCell.h"

@implementation PlayerCellTableViewCell

- (id)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier
{
    self = [super initWithStyle:style reuseIdentifier:reuseIdentifier];
    if (self) {
        // Initialization code
    }
    return self;
}

- (void)awakeFromNib
{
    // Initialization code
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated
{
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state
}

@end
