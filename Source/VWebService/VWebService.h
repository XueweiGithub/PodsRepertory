//
//  VWebService.h
//  VWebService
//
//  Created by yuan on 14-7-4.
//  Copyright (c) 2014年 www.heyuan110.com. All rights reserved.
//

/**************************************** 说     明 **************************************
 
 VWebService是为了方便快速开发，总结出来的模块，使用的是AFNetworking2.9,只支持IOS 6.0以上
 据苹果在其开发者页面公布的官方数据,截止到刚刚过去的2013年12月29日,苹果iOS7系统在苹果iOS设备中的占有率已经达到了78%，IOS6占20%，IOS5已经不到5%，到现在应该更少了，IOS8都要正式发布了，所以现在的版本可以从IOS6开始做最低兼容了。
 
 ******************************************************************************************/

#import <Foundation/Foundation.h>
#import "AFNetworking.h"
#import "VRequestManager.h"

@interface VWebService : NSObject

/**
 *  是否有网络连接
 *
 *  @return BOOL
 */
+ (BOOL)isConnected;

/**
 *  配置Webservice的地址，检验码
 *
 *  @param url  地址
 *  @param code 校验码，需要和后台给的校验码一致才能请求到数据
 */
+ (void)configURL:(NSString *)url
    signatureCode:(NSString *)code;

/**
 *  设置一些通用的参数到请求里，所有的接口都会带上这些参数，比如userid，token等，请传入字典格式
 *
 *  @param dict
 */
+ (void)setAdditionParameters:(NSDictionary *)parameters;

/**
 *	@brief	发起GET请求
 *
 *	@param 	action        请求的路径
 *	@param 	parameter 	参数
 *	@param 	block       回调block
 */
+(void)getRequestAction:(NSString *)action
              parameter:(NSDictionary *)parameter
          callbackBlock:(RequestCallBackBlock)block;

/**
 *	@brief	发起POST请求
 *
 *	@param 	action        请求的路径
 *	@param 	parameter 	参数
 *	@param 	block       回调block
 */
+(void)postRequestAction:(NSString *)action
               parameter:(NSDictionary *)parameter
           callbackBlock:(RequestCallBackBlock)block;

/**
 *	@brief	发起PUT请求
 *
 *	@param 	action        请求的路径
 *	@param 	parameter 	参数
 *	@param 	block       回调block
 */
+(void)putRequestAction:(NSString *)action
              parameter:(NSDictionary *)parameter
          callbackBlock:(RequestCallBackBlock)block;

/**
 *	@brief	发起DELETE请求
 *
 *	@param 	action        请求的路径
 *	@param 	parameter 	参数
 *	@param 	block       回调block
 */
+(void)deleteRequestAction:(NSString *)action
                 parameter:(NSDictionary *)parameter
             callbackBlock:(RequestCallBackBlock)block;

/**
 *	@brief	发起PATCH请求
 *
 *	@param 	action        请求的路径
 *	@param 	parameter 	参数
 *	@param 	block       回调block
 */
+(void)patchRequestAction:(NSString *)action
                parameter:(NSDictionary *)parameter
            callbackBlock:(RequestCallBackBlock)block;

@end




