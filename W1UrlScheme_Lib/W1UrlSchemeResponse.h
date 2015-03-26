//
//  W1UrlSchemeResponse.h
//  Merchant_SDK
//
//  Created by bespalown on 25/03/15.
//  Copyright (c) 2015 WalletOne. All rights reserved.
//

/**
 *      Данный класс получает платежную информацию от отправителя (WalletOne_SDK)
 */

#import "W1UrlScheme.h"
#import "W1UrlSchemeConstant.h"
#import "W1UrlSchemeDelegate.h"

@interface W1UrlSchemeResponse : NSObject

@property (nonatomic, readonly) long long seller;
@property (nonatomic, readonly) CGFloat amount;
@property (nonatomic, readonly) W1CurrencyCode currency;
@property (nonatomic, readonly) NSString *orderDescription;

/**
 *  Создается в методе делегата приложения банка и заполняет все property
 *  - (BOOL)application:(UIApplication *)application handleOpenURL:(NSURL *)url
 */
- (id)initWithHandleOpenURL:(NSURL *)url;

/**
 *  Метод используется для возврата обратно со статусом платежа и номером транзакции (в WalletOne_SDK)
 *
 *  @param transactionId            //номер транзакции платежа
 *  @param paymentTransactionStatus //статус платежа
 */
- (void)sendResponseWithTransactionId:(NSString *)transactionId
          andPaymentTransactionStatus:(W1PaymentTransactionStatus )paymentTransactionStatus
                             delegate:(id<w1UrlSchemeDelegate>)delegate;

@end
