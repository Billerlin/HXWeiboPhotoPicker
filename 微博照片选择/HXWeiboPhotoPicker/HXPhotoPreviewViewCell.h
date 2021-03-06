//
//  HXPhotoPreviewViewCell.h
//  微博照片选择
//
//  Created by 洪欣 on 17/2/9.
//  Copyright © 2017年 洪欣. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "HXPhotoModel.h"
@interface HXPhotoPreviewViewCell : UICollectionViewCell
@property (strong, nonatomic) HXPhotoModel *model;
@property (weak, nonatomic, readonly) UIImageView *imageView;
@end
