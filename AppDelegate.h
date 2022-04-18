/**
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#import <UIKit/UIKit.h>
#import <UMReactNativeAdapter/UMModuleRegistryAdapter.h> // this file not found
#import <React/RCTBridgeDelegate.h>
#import <UMCore/UMAppDelegateWrapper.h> // this file not found

@interface AppDelegate : UMAppDelegateWrapper <RCTBridgeDelegate> // affected by above file

@property (nonatomic, strong) UMModuleRegistryAdapter *moduleRegistryAdapter; //affected by above file
@property (nonatomic, strong) UIWindow *window;

@end
