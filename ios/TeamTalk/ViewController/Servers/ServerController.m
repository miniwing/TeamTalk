//
//  ServerController.m
//  TeamTalk
//
//  Created by Harry on 2021/9/2.
//  Copyright © 2021 DL. All rights reserved.
//
//  Mail: miniwing.hz@gmail.com
//  TEL : +(852)53054612
//

#import "ServerController.h"

@interface ServerController ()

@end

@implementation ServerController

- (void)dealloc {

   __LOG_FUNCTION;

   // Custom dealloc

   __SUPER_DEALLOC;

   return;
}

- (instancetype)initWithCoder:(NSCoder *)aCoder {

   int                            nErr                                     = EFAULT;
   
   __TRY;
   
   self  = [super initWithCoder:aCoder];
   
   if (self) {
            
   } /* End if () */
   
   __CATCH(nErr);
   
   return self;
}

- (void)viewDidLoad {

   int                            nErr                                     = EFAULT;

   __TRY;

   [super viewDidLoad];
   
//   [self.view setFrame:UIScreen.mainScreen.bounds];

   // Do any additional setup after loading the view.
   [self.view setBackgroundColor:UIColor.clearColor];

   [self.containerView setBackgroundColor:UIColor.lightGrayColor];
   [self.containerView.layer setCornerRadius:8];
   
   [self.serverTextField.layer setCornerRadius:4];
   
   [self.saveButton.layer setCornerRadius:4];

   __CATCH(nErr);

   return;
}

- (void)didReceiveMemoryWarning {

   int                            nErr                                     = EFAULT;

   __TRY;

   [super didReceiveMemoryWarning];
   // Dispose of any resources that can be recreated.

   __CATCH(nErr);

   return;
}

- (void)viewWillAppear:(BOOL)aAnimated {

   int                            nErr                                     = EFAULT;

   __TRY;

   [super viewWillAppear:aAnimated];

   __CATCH(nErr);

   return;
}

- (void)viewDidAppear:(BOOL)aAnimated {

   int                            nErr                                     = EFAULT;

   __TRY;

   [super viewDidAppear:aAnimated];

   __CATCH(nErr);

   return;
}

- (void)viewWillDisappear:(BOOL)aAnimated {

   int                            nErr                                     = EFAULT;

   __TRY;

   [super viewWillDisappear:aAnimated];

   __CATCH(nErr);

   return;
}

- (void)viewDidDisappear:(BOOL)aAnimated {

   int                            nErr                                     = EFAULT;

   __TRY;

   [super viewDidDisappear:aAnimated];

   __CATCH(nErr);

   return;
}

@end

#pragma mark - IBAction
@implementation ServerController (Action)

- (IBAction)saveButtonPressed:(UIButton*)aSender {
   
   int                            nErr                                     = EFAULT;
   
   __TRY;
   
   [self dismissViewControllerAnimated:YES
                            completion:^{
      
   }];
   
   __CATCH(nErr);
   
   return;
}

@end

#pragma mark - UIStoryboard
@implementation ServerController (UIStoryboard)

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)aSegue sender:(id)aSender {

   int                            nErr                                     = EFAULT;

   __TRY;

   // Get the new view controller using [aSegue destinationViewController].
   // Pass the selected object to the new view controller.

   __CATCH(nErr);

   return;
}

+ (NSString *)storyboard {
   
   return @"";
}

@end

#pragma mark - IDEAPresentationControllerDelegate
@implementation ServerController (IDEAPresentationControllerDelegate)

- (CGRect)frameOfPresented {
   
   return CGRectMake(0,
                     0,
                     self.view.width,
                     self.view.height);
}

- (BOOL)backgroundTouchToClose {
   
   return YES;
}

#pragma mark - UITheme
- (UIModalPresentationStyle)modalPresentationStyle {

   LogView((@"-[%@ modalPresentationStyle]", [self class]));

   return UIModalPresentationCustom;
}

@end
