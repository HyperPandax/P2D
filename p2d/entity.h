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
public:
	Entity();
	virtual ~Entity();

	Sprite* sprite() { return _sprite; };
	void addSprite(Sprite* spr);
	//void addSprite(const std::string& filename);
	//void addSprite(const std::string& filename, float pivotx, float pivoty);
	//void addSprite(const std::string& filename, float pivotx, float pivoty, int filter, int wrap);

	virtual void update(float deltaTime) = 0;
	
	glm::vec3 position;
	glm::vec3 scale;
	float rotation;
	

	private:
		// sprite
		Sprite * _sprite;
		

		/*void deleteSprite() {
			if (_sprite != nullptr) {
				delete _sprite;
				_sprite = nullptr;
			}
		};*/

};

#endif /* ENTITY_H */
