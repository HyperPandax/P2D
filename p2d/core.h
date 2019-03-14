
#ifndef CORE_H
#define CORE_H

// Include standard headers
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>

#include <p2d/renderer.h>
//#include <p2d/input.h>
#include <p2d/entity.h>
#include <p2d/scene.h>

class Core
{
public:
	Core();
	virtual ~Core();

	void run(Scene* scene);

private:
	//Renderer _renderer;

	double _calculateDeltaTime();
	double _deltaTime;
};


#endif /* CORE_H */