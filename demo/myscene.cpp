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
	this->addChild(myentity);
}

MyScene::~MyScene()
{

}

void MyScene::update(float deltaTime)
{
}