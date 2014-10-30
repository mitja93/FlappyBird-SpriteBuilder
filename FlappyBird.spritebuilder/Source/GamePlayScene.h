//
//  GamePlayScene.h
//  FlappyBird
//
//  Created by Gerald on 2/11/14.
//  Copyright (c) 2014 Apportable. All rights reserved.
//

#import "CCNode.h"
#import "Character.h"

typedef NS_ENUM(NSInteger, DrawingOrder) {
    DrawingOrderPipes,
    DrawingOrderGround,
    DrawingOrderHero
};

@interface GamePlayScene : CCNode <CCPhysicsCollisionDelegate>
{
    // define variables here;
    Character*     character;
    CCPhysicsNode* physicsNode;
    float timeSinceObstacle;
}
// Increment the time since the last obstacle was added
timeSinceObstacle += delta; // delta is approximately 1/60th of a second

// Check to see if two seconds have passed
if (timeSinceObstacle > 2.0f)
{
    // Add a new obstacle
    [self addObstacle];
    
    // Then reset the timer.
    timeSinceObstacle = 0.0f;
}

-(void) initialize;
-(void) addObstacle;
-(void) showScore;

@end
