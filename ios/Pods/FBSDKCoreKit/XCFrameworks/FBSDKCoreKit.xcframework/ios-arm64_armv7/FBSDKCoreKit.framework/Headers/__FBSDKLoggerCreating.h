/*
 * Copyright (c) Facebook, Inc. and its affiliates.
 * All rights reserved.
 *
 * This source code is licensed under the license found in the
 * LICENSE file in the root directory of this source tree.
 */

#import <Foundation/Foundation.h>

#import <FBSDKCoreKit/FBSDKLogging.h>
#import <FBSDKCoreKit/FBSDKLoggingBehavior.h>

NS_ASSUME_NONNULL_BEGIN

/**
 Internal Type exposed to facilitate transition to Swift.
 API Subject to change or removal without warning. Do not use.

 @warning INTERNAL - DO NOT USE
 */
NS_SWIFT_NAME(LoggerCreating)
@protocol __FBSDKLoggerCreating

- (id<FBSDKLogging>)createLoggerWithLoggingBehavior:(FBSDKLoggingBehavior)loggingBehavior;

@end

NS_ASSUME_NONNULL_END
