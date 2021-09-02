//
//  ServerController.h
//  TeamTalk
//
//  Created by Harry on 2021/9/2.
//  Copyright © 2021 DL. All rights reserved.
//
//  Mail: miniwing.hz@gmail.com
//

#import <UIKit/UIKit.h>
#import <IDEAUIVendor/IDEAUIVendor.h>

NS_ASSUME_NONNULL_BEGIN

@interface ServerController : UIViewController <IDEAPresentationControllerDelegate>

@property (nonatomic, weak)   IBOutlet       UIView                              * containerView;

@property (nonatomic, weak)   IBOutlet       UITextField                         * serverTextField;

@property (nonatomic, weak)   IBOutlet       UIButton                            * saveButton;

@end

@interface ServerController ()

@end

NS_ASSUME_NONNULL_END
