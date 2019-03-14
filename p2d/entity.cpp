#include <iostream>

#include <p2d/entity.h>

Entity::Entity() 
{
	_sprite = nullptr;
	_parent = nullptr;

	position = glm::vec3(0.0f, 0.0f, 0.0f);
	scale = glm::vec3(1.0f, 1.0f, 1.0f);
	rotation = float(0.0f);
}

Entity::~Entity()
{
	deleteSprite();
}
void Entity::addChild(Entity* child)
{
	if (child->_parent != nullptr) {
		child->_parent->removeChild(child);
	}
	child->_parent = this;
	this->_children.push_back(child);
}
void Entity::removeChild(Entity* child)
{
	std::vector< Entity* >::iterator it = _children.begin();
	while (it != _children.end()) {
		if ((*it)->_guid == child->_guid) {
			child->_parent = nullptr;
			it = _children.erase(it);
		}
		else {
			++it;
		}
	}
}
void Entity::addSprite(const std::string& filepath)
{
	deleteSprite();
	Sprite* spr = new Sprite(filepath);
	this->_sprite = spr;
}
/*void Entity::addSprite(const std::string& filename)
{
	this->addSprite(filename, 0.5f, 0.5f);
}*/
/*void Entity::addSprite(const std::string& filename, float pivotx, float pivoty)
{
	deleteSprite();
	_sprite = new Sprite();
	_sprite->setupSprite(filename, pivotx, pivoty, 1.0f, 1.0f, DEFAULTFILTER, DEFAULTWRAP); // trilinear filter, mirror repeat
}*/
/*void Entity::addSprite(const std::string& filename, float pivotx, float pivoty, int filter, int wrap)
{
	deleteSprite();
	_sprite = new Sprite();
	_sprite->setupSprite(filename, pivotx, pivoty, 1.0f, 1.0f, filter, wrap);
}*/
