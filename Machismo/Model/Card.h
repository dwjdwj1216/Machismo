//
//  Card.h
//  Machismo
//
//  Created by 戴王炯 on 3/19/16.
//  Copyright © 2016 戴王炯. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Card : NSObject

@property (strong,nonatomic)NSString *contents;
@property (nonatomic,getter=isChosen)BOOL chosen;
@property (nonatomic,getter=isMatched)BOOL matched;

@property (nonatomic)NSUInteger numberOfMatchingCards;

-(int)match:(NSArray *)otherCards;

@end
