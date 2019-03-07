#ifndef ENTITY_H
#define ENTITY_H

#include <GL/glew.h>
#include <glfw3.h>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtx/euler_angles.hpp>

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


#include <p2d/sprite.h>

class Entity
{
	Entity();
	virtual ~Entity();
	public:
	

		virtual void update(float deltaTime) = 0;
		Sprite* sprite() { return _sprite; };
		void addSprite(Sprite* spr);
	
		glm::vec3 position;
		glm::vec3 scale;
		float rotation;
	

	private:
		Sprite * _sprite;
		// sprite

};

#endif /* ENTITY_H */
