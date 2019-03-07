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
	//_sprite = new Sprite("assets/pencils.tga");
	this->_sprite = spr;
}
/*void Entity::addSprite(const std::string& filename)
{
	this->addSprite(filename, 0.5f, 0.5f);
}
void Entity::addSprite(const std::string& filename, float pivotx, float pivoty)
{
	deleteSprite();
	_sprite = new Sprite();
	_sprite->setupSprite(filename, pivotx, pivoty, 1.0f, 1.0f, DEFAULTFILTER, DEFAULTWRAP); // trilinear filter, mirror repeat
}
void Entity::addSprite(const std::string& filename, float pivotx, float pivoty, int filter, int wrap)
{
	deleteSprite();
	_sprite = new Sprite();
	_sprite->setupSprite(filename, pivotx, pivoty, 1.0f, 1.0f, filter, wrap);
}*/
