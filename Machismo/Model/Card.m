//
//  Card.m
//  Machismo
//
//  Created by 戴王炯 on 3/19/16.
//  Copyright © 2016 戴王炯. All rights reserved.
//

#import "Card.h"

@implementation Card

-(NSUInteger)numberOfMatchingCards{
    if(!_numberOfMatchingCards){
        _numberOfMatchingCards = 2;
    }
    return _numberOfMatchingCards;
}

-(int)match:(NSArray *)otherCards{
    int score = 0;
    for(Card *card in otherCards){
        if ([card.contents isEqualToString:self.contents]) {
            score =1;
        }
    }
    return score;
}
@end
