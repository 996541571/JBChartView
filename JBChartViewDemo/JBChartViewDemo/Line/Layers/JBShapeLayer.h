//
//  JBShapeLayer.h
//  JBChartViewDemo
//
//  Created by Terry Worona on 12/25/15.
//  Copyright © 2015 Jawbone. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface JBShapeLayer : CAShapeLayer

- (instancetype)initWithTag:(NSUInteger)tag filled:(BOOL)filled currentPath:(UIBezierPath *)currentPath;

@property (nonatomic, readonly) NSUInteger tag;
@property (nonatomic, readonly) BOOL filled;
@property (nonatomic, strong) UIBezierPath *currentPath;

@end
