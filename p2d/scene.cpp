#include <iostream>

#include <p2d/scene.h>

Scene::Scene() : Entity()
{
	_camera = new Camera();
	_isRunning = true;
}

Scene::~Scene()
{

}
/*
void Scene::updateScene(float deltaTime)
{
	this->_updateEntity(this, deltaTime);
}


void Scene::_updateEntity(Entity* entity, float deltaTime)
{
	// call update() for this entity
	entity->update(deltaTime);

	// update() all Children (recursively)
	std::vector<Entity*> children = entity->children();
	std::vector<Entity*>::iterator child;
	for (child = children.begin(); child != children.end(); child++) {
		this->_updateEntity(*child, deltaTime);
	}
}*/