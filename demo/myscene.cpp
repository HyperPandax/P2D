// #include
#include <fstream>
#include <sstream>
#include <vector>
#include <string> 
#include <ctime>
#include "glm/ext.hpp"

#include "myscene.h"

#include <p2d/input.h>

MyScene::MyScene() : Scene()
{
	myentity = new MyEntity();
	myentity->position = glm::vec3(300, 300, 1);
	myentity->scale = glm::vec3(3, 3, 1);
	myentity->rotation = 3.0f;
	this->addChild(myentity);

	myentity2 = new MyEntity();
	myentity2->position = glm::vec3(960, 300, 1);
	myentity2->scale = glm::vec3(3, 3, 1);
	myentity2->rotation = 3.0f;
	this->addChild(myentity2);

	myentity3 = new MyEntity();
	myentity3->position = glm::vec3(630, 500, 1);
	myentity3->scale = glm::vec3(0.75, 0.75, 1);
	myentity3->rotation = 4.0f;
	this->addChild(myentity3);

	myentity4 = new MyEntity();
	myentity4->addSprite("assets/rgba.tga");
	myentity4->position = glm::vec3(630, 650, 1);
	myentity4->scale = glm::vec3(8, 0.15, 1);
	this->addChild(myentity4);

	myentity5 = new MyEntity();
	myentity5->addSprite("assets/kingkong.tga");
	myentity5->position = glm::vec3(200, 150, 1);
	myentity5->scale = glm::vec3(2, 0.15, 1);
	myentity5->rotation = 2.6f;
	this->addChild(myentity5);

	myentity6 = new MyEntity();
	myentity6->addSprite("assets/kingkong.tga");
	myentity6->position = glm::vec3(1060, 150, 1);
	myentity6->scale = glm::vec3(2, 0.15, 1);
	myentity6->rotation = 3.6f;
	this->addChild(myentity6);
}

MyScene::~MyScene()
{

}

void MyScene::update(float deltaTime)
{
	myentity->rotation += 10.0f;
	myentity2->rotation -= 10.0f;
	myentity3->rotation -= 0.05f;

	if (Input::GetKeyDown(KEYCODE_0)) {
		std::cout << "WHAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA" << std::endl;
	}
	if (Input::GetKeyUp(KEYCODE_9)) {
		std::cout << "NEE" << std::endl;
	}
	if (Input::GetKey(KEYCODE_7)) {
		std::cout << "meh" << std::endl;
	}
	if (Input::GetButtonDown(BUTTONCODE_LEFT)) {
		glm::vec2 pos = Input::GetMousePosition();
		std::cout << glm::to_string(pos) << std::endl;
	}
	if (Input::GetButtonDown(BUTTONCODE_RIGHT)) {
		myentity3->position = glm::vec3(Input::GetMousePosition(),0);
		std::cout << "GOAT" << std::endl;
	}

	Input::HandleUpdates();
}