//
//  TreasureDetailCell.h
//  WinTreasure
//
//  Created by Apple on 16/6/13.
//  Copyright © 2016年 linitial. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TreasureDetailModel.h"

typedef void(^TreasureRecordCellBlock)(NSIndexPath *indexpath);

@interface TreasureDetailCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UIImageView *headImageView;

@property (weak, nonatomic) IBOutlet UILabel *usernameLabel;

@property (weak, nonatomic) IBOutlet UILabel *IPLabel;

@property (weak, nonatomic) IBOutlet UILabel *partInLabel;

@property (copy, nonatomic) NSIndexPath *indexPath;

@property (copy, nonatomic) TreasureRecordCellBlock clickHeadImage;

@property (strong, nonatomic) TreasureDetailModel *model;

+ (instancetype)cellWithTableView:(UITableView *)tableview;

@end

@interface TimeLineCell : UITableViewCell

@property (copy, nonatomic) NSString *timeLine;

@property (nonatomic, strong) YYLabel *timeLabel;

+ (instancetype)cellWithTableView:(UITableView *)tableview;

@end
