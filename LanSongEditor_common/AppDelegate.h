//
//  AppDelegate.h
//  LanSongEditor_common
//
//  Created by sno on 16/8/3.
//  Copyright © 2016年 sno. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@property int currentFilterIndex;
@property BOOL gDeviceListFirstShow;



/**
 默认的输入源的路径.
 在第一个界面,用户选择或默认.在其他界面处理.
 */
@property NSString *srcVideoPath;

+(AppDelegate *)getInstance;
@end

