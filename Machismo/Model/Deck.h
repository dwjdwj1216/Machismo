//
//  Deck.h
//  Machismo
//
//  Created by 戴王炯 on 3/19/16.
//  Copyright © 2016 戴王炯. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"
@interface Deck : NSObject

-(void)addCard:(Card*)card atTop:(BOOL)atTop;
-(void)addCard:(id)card;

-(Card *)drawRandomCard;

@end
