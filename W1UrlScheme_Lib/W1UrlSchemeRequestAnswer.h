//
//  W1UrlSchemeRequestAnswer.h
//  Merchant_SDK
//
//  Created by bespalown on 26/03/15.
//  Copyright (c) 2015 WalletOne. All rights reserved.
//

/**
 *      Данный класс получает ответ от приложения банка
 */

#import "W1UrlScheme.h"
#import "W1UrlSchemeConstant.h"

@interface W1UrlSchemeRequestAnswer : NSObject

@property (nonatomic, readonly) NSString *transactionId;
@property (nonatomic, readonly) W1PaymentTransactionStatus paymentTransactionStatus;

/**
 *  Создается в методе делегата и заполняет все property
 *  - (BOOL)application:(UIApplication *)application handleOpenURL:(NSURL *)url
 */
- (id)initWithHandleOpenURL:(NSURL *)url;

@end
