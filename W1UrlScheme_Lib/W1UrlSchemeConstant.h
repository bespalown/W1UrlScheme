//
//  W1UrlSchemeConstant.h
//  Merchant_SDK
//
//  Created by bespalown on 25/03/15.
//  Copyright (c) 2015 WalletOne. All rights reserved.
//

typedef NS_ENUM(NSInteger, W1CurrencyCode) {
    W1CurrencyCodeRUB = 643,    //Russian ruble
    W1CurrencyCodeKZT = 398,    //Kazakhstani tenge
    W1CurrencyCodeZAR = 710,    //South African rand
    W1CurrencyCodeUSD = 840,    //United States dollar
    W1CurrencyCodeTJS = 972,    //Tajikistani somoni
    W1CurrencyCodeBYR = 974,    //Belarusian ruble
    W1CurrencyCodeEUR = 978,    //Euro
    W1CurrencyCodeUAH = 980,    //Ukrainian hryvnia
    W1CurrencyCodeGEL = 981,    //Georgian lari
    W1CurrencyCodePLN = 985     //Poland Zloty
};

typedef NS_ENUM(NSInteger, W1PaymentTransactionStatus) {
    W1PaymentTransactionStatusUnknown   = 0,
    W1PaymentTransactionStatusPending   = 1,
    W1PaymentTransactionStatusSuccess   = 2,
    W1PaymentTransactionStatusError     = 3,
    W1PaymentTransactionStatusCancel    = 4
};
    
typedef NS_ENUM(NSInteger, W1PaymentProvider) {
    W1PaymentProviderWalletOne,
};

