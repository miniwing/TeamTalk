//
//  MTTRegisterViewController.m
//  TeamTalk
//
//  Created by Donal Tong on 16/4/12.
//  Copyright © 2016年 DL. All rights reserved.
//

#import "MTTRegisterViewController.h"
#import "UIView+SDAutoLayout.h"

#import "RegistModule.h"
#import "MBProgressHUD.h"

@interface MTTRegisterViewController () <UITextFieldDelegate>

@property (nonatomic, strong) UITextField   * accountTextField;
@property (nonatomic, strong) UITextField   * passTextField;
@property (nonatomic, strong) UIButton      * registButton;

@end

@implementation MTTRegisterViewController

- (void)viewDidLoad {
   
   int                            nErr                                     = EFAULT;
      
   __TRY;

   [super viewDidLoad];
   
   [self initUi];
   
   __CATCH(nErr);
   
   return;
}

- (void)didReceiveMemoryWarning {
   
   [super didReceiveMemoryWarning];
   
   return;
}

- (void)initUi {
   
   int                            nErr                                     = EFAULT;
      
   __TRY;

   self.view.backgroundColor = UIColorFromRGB(0xffffff, 1.0);
   
   _accountTextField = [UITextField new];
   _accountTextField.returnKeyType = UIReturnKeyNext;
   _accountTextField.delegate = self;
   _accountTextField.placeholder = @"账号";
   [_accountTextField setBorderStyle:UITextBorderStyleNone];
   [_accountTextField.layer setBorderWidth:1];
   [_accountTextField.layer setBorderColor:UIColorFromRGB(0xdddddd, 1.0).CGColor];
   [self.view addSubview:_accountTextField];
   _accountTextField.sd_layout
   .leftSpaceToView(self.view, 20)
   .rightSpaceToView(self.view, 20)
   .topSpaceToView(self.view, 100)
   .heightIs(44)
   .centerXEqualToView(self.view);
   
   _passTextField = [UITextField new];
   _passTextField.delegate = self;
   _passTextField.returnKeyType = UIReturnKeyDone;
   [self.view addSubview:_passTextField];
   [_passTextField setBorderStyle:UITextBorderStyleNone];
   _passTextField.placeholder = @"密码";
   [_passTextField.layer setBorderWidth:1];
   [_passTextField.layer setBorderColor:UIColorFromRGB(0xdddddd, 1.0).CGColor];
   _passTextField.sd_layout
   .leftSpaceToView(self.view, 20)
   .rightSpaceToView(self.view, 20)
   .heightIs(44)
   .topSpaceToView(_accountTextField, 20 )
   .centerXEqualToView(self.view);
   UIView *padView1                = [[UIView alloc] initWithFrame:CGRectMake(0, 0, 10, _passTextField.frame.size.height)];
   _passTextField.leftView              = padView1;
   _passTextField.leftViewMode     = UITextFieldViewModeAlways;
   _passTextField.secureTextEntry  = YES;
   UIView *padView2                = [[UIView alloc] initWithFrame:CGRectMake(0, 0, 10, _accountTextField.frame.size.height)];
   _accountTextField.leftView      = padView2;
   _accountTextField.leftViewMode  = UITextFieldViewModeAlways;
   
   _registButton = [UIButton new];
   [_registButton setBackgroundColor:UIColorFromRGB(0x00abee, 1.0)];
   [_registButton setTitle:@"注册" forState:UIControlStateNormal];
   [_registButton addTarget:self action:@selector(regist) forControlEvents:UIControlEventTouchUpInside];
   [self.view addSubview:_registButton];
   _registButton.sd_layout
   .leftSpaceToView(self.view, 20)
   .rightSpaceToView(self.view, 20)
   .heightIs(44)
   .topSpaceToView(_passTextField, 60)
   .centerXEqualToView(self.view);
   
#if __Debug__
   [self.accountTextField setText:@"AAAA"];
   [self.passTextField setText:@"AAAA"];
#endif /* __Debug__ */
   
   __CATCH(nErr);
   
   return;
}

- (void)login {
   
   NSString *account    = _accountTextField.text;
   NSString *password   = _passTextField.text;
   if (!(account.trim.length > 0) || !(password.trim.length > 0)) {
      [OHAlertView showAlertWithTitle:@"提示" message:@"" dismissButton:@"好的"];
      return;
   }
   [SVProgressHUD show];
   [[ApiClient sharedInstance] registerUser:account
                                   password:password
                                    Success:^(id model) {
      [SVProgressHUD dismiss];
      if ([[model valueForKey:@"status"] integerValue] == 0) {
         [self.navigationController popViewControllerAnimated:YES];
      }
      else {
         [OHAlertView showAlertWithTitle:@"提示" message:[model valueForKey:@"msg"] dismissButton:@"好的"];
      }
   }
                                    failure:^(NSString *message) {
      [SVProgressHUD dismiss];
      [OHAlertView showAlertWithTitle:@"提示" message:message dismissButton:@"好的"];
   }];
}


- (void)regist {
   
   int                            nErr                                     = EFAULT;
   
   NSString                      *szAccount                                = nil;
   NSString                      *szPassword                               = nil;
   
   __TRY;
   
   LogDebug((@"-[MTTRegisterViewController regist] : Account : %@", szAccount));
   LogDebug((@"-[MTTRegisterViewController regist] : Password : %@", szPassword));

   szAccount   = _accountTextField.text;
   szPassword  = _passTextField.text;
   
   if (!(szAccount.trim.length > 0) || !(szPassword.trim.length > 0)) {
      
      [OHAlertView showAlertWithTitle:APP_STR(@"错误") message:APP_STR(@"用户名/密码为空") dismissButton:@"好的"];
      
      nErr  = EINVAL;
      
      break;
   }
   
   MBProgressHUD *HUD   = [[MBProgressHUD alloc] initWithView:self.view];
   [self.view addSubview:HUD];
   [HUD show:YES];
   HUD.dimBackground    = YES;
   HUD.labelText = @"正在注册";

   [[RegistModule instance] registWithUsername:szAccount
                                      password:szPassword
                                       success:^(MTTUserEntity *aUser) {
      
      [HUD removeFromSuperview];

      LogDebug((@"-[MTTRegisterViewController ]regist"));
   }
                                       failure:^(NSString *aError) {
      
      [HUD removeFromSuperview];
      
      [OHAlertView showAlertWithTitle:@"提示" message:aError dismissButton:@"好的"];

   }];
   
   __CATCH(nErr);
   
   return;
}

@end
