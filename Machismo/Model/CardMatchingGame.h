//
//  CardMatchingGame.h
//  Machismo
//
//  Created by 戴王炯 on 3/19/16.
//  Copyright © 2016 戴王炯. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Deck.h"
@interface CardMatchingGame : NSObject

-(instancetype)initWithCardCount:(NSUInteger)count usingDeck:(Deck*)deck;

-(void)chooseCardAtIndex:(NSUInteger)index;
-(Card *)cardAtIndex:(NSUInteger)index;




@property (nonatomic,readonly)NSInteger score;


@end
