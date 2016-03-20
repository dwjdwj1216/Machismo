//
//  PlayingCard.h
//  Machismo
//
//  Created by 戴王炯 on 3/19/16.
//  Copyright © 2016 戴王炯. All rights reserved.
//

#import "Card.h"

@interface PlayingCard : Card

@property (strong,nonatomic)NSString *suit;
@property (nonatomic)NSUInteger rank;

+(NSArray *)validSuits;
+(NSArray *)rankStrings;
+(NSUInteger)maxRank;



@end
