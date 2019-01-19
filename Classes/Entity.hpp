//
//  Entity.hpp
//  Platformer
//
//  Created by Shrenil Patel on 2018-11-16.
//

#ifndef Entity_hpp
#define Entity_hpp

#include "cocos2d.h"

class Entity {
    
public:
    cocos2d::Vec2 position;
    cocos2d::Vec2 size;
    cocos2d::Vec2 speed;
    
    Entity(cocos2d::Vec2 position, cocos2d::Vec2 size): position(position), size(size), speed(cocos2d::Vec2()) {}
    void draw(cocos2d::DrawNode* drawNode);
    bool checkCollsion(std::vector<Entity *> entities);
};



#endif /* Entity_hpp */
