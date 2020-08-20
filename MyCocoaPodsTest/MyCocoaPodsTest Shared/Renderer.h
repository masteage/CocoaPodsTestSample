//
//  Renderer.h
//  MyCocoaPodsTest Shared
//
//  Created by masteage on 2020/08/20.
//  Copyright © 2020 masteage. All rights reserved.
//

#import <MetalKit/MetalKit.h>

// Our platform independent renderer class.   Implements the MTKViewDelegate protocol which
//   allows it to accept per-frame update and drawable resize callbacks.
@interface Renderer : NSObject <MTKViewDelegate>

-(nonnull instancetype)initWithMetalKitView:(nonnull MTKView *)view;

@end

