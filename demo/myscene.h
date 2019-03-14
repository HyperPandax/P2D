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
		MyEntity * myentity;
		   
};
#endif /* MYSCENE_H */