//
//  AFHTTPClientV2.h
//  PAFNetClient
//
//  Created by JK.PENG on 14-1-22.
//  Copyright (c) 2014年 njut. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum HttpMethod{
    HttpMethodGet      = 0,
    HttpMethodPost     = 1,
    HttpMethodDelete   = 2,
}HttpMethod;

@class AFHTTPClientV2;

typedef void (^HTTPRequestV2SuccessBlock)(id responseObject);
typedef void (^HTTPRequestV2FailedBlock)(NSError *error);


@interface AFHTTPClientV2 : NSObject


+ (AFHTTPClientV2 *)requestWithBaseURLStr:(NSString *)URLString
                                   params:(NSDictionary *)params
                               httpMethod:(HttpMethod)httpMethod
                             successBlock:(HTTPRequestV2SuccessBlock)successReqBlock
                              failedBlock:(HTTPRequestV2FailedBlock)failedReqBlock;


@end
