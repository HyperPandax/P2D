#include <iostream>

#include <p2d/entity.h>

Entity::Entity() 
{
	_sprite = nullptr;
}

Entity::~Entity()
{

}

void Entity::addSprite(Sprite* spr)
{
	//deleteSprite();
	//_sprite = new Sprite();
	this->_sprite = spr;
}