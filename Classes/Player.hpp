//
//  Player.hpp
//  Platformer
//
//  Created by Shrenil Patel on 2018-11-17.
//

#ifndef Player_hpp
#define Player_hpp

#include "Entity.hpp"

class Player: public Entity {
    
    
public:
    Player(cocos2d::Vec2 pos): Entity(pos, cocos2d::Vec2(32, 32)) {
        
    }
};

#endif /* Player_hpp */
