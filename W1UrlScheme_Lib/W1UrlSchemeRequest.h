//
//  W1UrlSchemeRequest.h
//  Merchant_SDK
//
//  Created by bespalown on 25/03/15.
//  Copyright (c) 2015 WalletOne. All rights reserved.
//

/**
 *  Данный класс служит для формирования и отправки платежной информации в приложение банка
 */

#import "W1UrlScheme.h"
#import "W1UrlSchemeConstant.h"

@interface W1UrlSchemeRequest : NSObject <UIAlertViewDelegate>

@property (nonatomic, readonly) long long seller;
@property (nonatomic, readonly) CGFloat amount;
@property (nonatomic, readonly) W1CurrencyCode currency;
@property (nonatomic, readonly) NSString *orderDescription;
@property (nonatomic, readonly) NSString *returnUrlScheme;
@property (nonatomic, readonly) W1PaymentProvider paymentProvider;

/**
 *  Создаем параметры платежа для отправки
 *
 *  @param seller           номер кошелька мерчанта
 *  @param amount           сумма платежа
 *  @param currency         идентификатор валюты, согласно ISO 4217
 *  @param orderDescription описание
 *  @param returnUrlScheme  название URL Scheme для обратного возврата в приложение
 *
 */
- (id)initWithSeller:(long long )seller
              amount:(CGFloat )amount
            currency:(W1CurrencyCode )currency
         description:(NSString *)orderDescription
     returnUrlScheme:(NSString *)returnUrlScheme
     paymentProvider:(W1PaymentProvider )paymentProvider;

/**
 *  Отправляем данные для оплаты в стороннее приложение
 *  Если вернется nil то запрос на оплату ушел, иначе смотрим ошибку
 */
- (void)sendRequest;

@end
