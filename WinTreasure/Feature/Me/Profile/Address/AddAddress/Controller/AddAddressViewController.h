//
//  AddAddressViewController.h
//  WinTreasure
//
//  Created by Apple on 16/6/22.
//  Copyright © 2016年 linitial. All rights reserved.
//

#import "BaseViewController.h"

@class AddressModel;

typedef void(^AddAddressBlock)(void);

@interface AddAddressViewController : BaseViewController

@property (assign, nonatomic) BOOL isModified;

@property (strong, nonatomic) AddressModel *model;

@property (copy, nonatomic) AddAddressBlock saveBlock;

@end
