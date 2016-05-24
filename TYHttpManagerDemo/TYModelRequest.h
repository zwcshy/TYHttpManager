//
//  TYModelRequest.h
//  TYHttpManagerDemo
//
//  Created by tany on 16/5/24.
//  Copyright © 2016年 tany. All rights reserved.
//

#import "TYHttpRequest.h"
#import "TYResponseObject.h"

@interface TYModelRequest : TYHttpRequest

@property (nonatomic, strong, readonly) TYResponseObject *responseObject;

- (instancetype)initWithModelClass:(Class)modelClass;

+ (instancetype)requestWithModelClass:(Class)modelClass;

@end