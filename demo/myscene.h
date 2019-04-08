#ifndef MYSCENE_H
#define MYSCENE_H

#include <p2d/scene.h>

#include "myentity.h"

class MyScene :  public Scene
{
	public:
		MyScene();
		virtual ~MyScene();
		virtual void update(float deltaTime);

	private: 
		MyEntity* myentity;
		MyEntity* myentity2;
		MyEntity* myentity3;
		MyEntity* myentity4;
		MyEntity* myentity5;
		MyEntity* myentity6;
};
#endif /* MYSCENE_H */