     // #include
#include <fstream>
#include <sstream>
#include <vector>
#include <string> 
#include <ctime>

#include "myscene.h"

MyScene::MyScene() : Scene()
{
	myentity = new MyEntity();
	myentity->position = glm::vec3(300, 300, 1);
	myentity->scale = glm::vec3(3, 3, 1);
	myentity->rotation = 3.0f;
	this->addChild(myentity);
}

MyScene::~MyScene()
{

}

void MyScene::update(float deltaTime)
{
	myentity->rotation += 10.0f;
}