#ifndef ENTITY_H
#define ENTITY_H

#include <GL/glew.h>
#include <glfw3.h>

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


#include <p2d/sprite.h>

class Entity
{
public:
	Entity();
	virtual ~Entity();

	virtual void update(float deltaTime) = 0;

	void addSprite(Sprite* spr);

private:

	// sprite
	Sprite* _sprite;
};

#endif /* ENTITY_H */
