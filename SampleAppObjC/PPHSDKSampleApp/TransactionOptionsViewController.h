//
//  TransactionOptionsViewController.h
//  PPHSDKSampleApp
//
//  Created by Patil, Mihir on 7/5/18.
//  Copyright © 2018 Patil, Mihir. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <PayPalRetailSDK/PayPalRetailSDK.h>

@interface TransactionOptionsViewController : UIViewController
// Sets up the parameters for taking in Options from Payment View Controller
@property (nonatomic,weak) id delegate;
@property (nonatomic,assign) PPRetailTransactionBeginOptions *transactionOptions;
@property (nonatomic,assign) NSMutableArray *formFactorArray;
@end
