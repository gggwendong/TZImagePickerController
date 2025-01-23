//
//  TZPhotoPickerController.h
//  TZImagePickerController
//
//  Created by 谭真 on 15/12/24.
//  Copyright © 2015年 谭真. All rights reserved.
//

#import <UIKit/UIKit.h>

@class TZAlbumModel;
@interface TZPhotoPickerController : UIViewController

@property (nonatomic, assign) BOOL isFirstAppear;
@property (nonatomic, assign) NSInteger columnNumber;
@property (nonatomic, strong) TZAlbumModel *model;
/**
 * 加载更多资源
 * 当用户下拉时触发加载更多旧照片
 */
- (void)loadMoreAssets;
@end


@interface TZCollectionView : UICollectionView

@end
