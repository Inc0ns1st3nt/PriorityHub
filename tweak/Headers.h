


#import "PHContainerView.h"
#import "PHPullToClearView.h"
#import "PHViewController.h"
#import <Hook.h>
#import <UserNotificationsKit/NCNotificationContent.h>
#import <UserNotificationsKit/NCNotificationRequest.h>
#import <UserNotificationsUIKit/NCNotificationListSection.h>
#import <UserNotificationsUIKit/NCNotificationPriorityList.h>
#import <UserNotificationsUIKit/NCNotificationChronologicalList.h>
#import <UserNotificationsUIKit/NCNotificationListClearButton.h>
#import <UserNotificationsUIKit/NCNotificationListSectionHeaderView.h>
#import <UserNotificationsUIKit/NCNotificationCombinedListViewController.h>
#import <UserNotificationsUIKit/NCNotificationListCollectionViewFlowLayout.h>
#import <UserNotificationsUIKit/NCNotificationListCell.h>
#import <UserNotificationsUIKit/NCNotificationShortLookView.h>
#import <UserNotificationsUIKit/NCNotificationListCollectionView.h>

// #import <UserNotificationsUIKit/NCNotificationPriorityList.h>

#import <UserNotificationsUIKit/NCBulletinNotificationSource.h>

#import <SpringBoard/SBDashBoardViewController.h>
#import <SpringBoard/SBLockScreenDateViewController.h>
#import <SpringBoard/SBLockScreenManager.h>
#import <SpringBoard/SpringBoard-Class.h>


#import <BulletinBoard/BBBulletinRequest.h>
#import <BulletinBoard/BBServer.h>
#import <BulletinBoard/BBAction.h>


extern CGSize appViewSize();

@interface NCNotificationCombinedListViewController (PH)
@end

@interface NCNotificationRequest (PH)
-(void)sxiExpand;
-(void)sxiCollapse;
@end
