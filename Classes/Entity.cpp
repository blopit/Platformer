//
//  Entity.cpp
//  Platformer
//
//  Created by Shrenil Patel on 2018-11-16.
//

#include "Entity.hpp"

USING_NS_CC;

void Entity::draw(cocos2d::DrawNode* drawNode){
    auto col = Color4F::RED;
    drawNode->drawRect(position, position+size, col);
}

bool checkCollsion(std::vector<Entity *> entities) {
    return true;
}
