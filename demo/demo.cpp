// Include GLEW
#include <GL/glew.h>

// Include GLFW
#include <glfw3.h>

#include <p2d/core.h>
#include <p2d/camera.h>
#include <p2d/sprite.h>
#include <p2d/renderer.h>
#include <p2d/entity.h>

#include <p2d/input.h>
#include "myscene.h"

int main( void )
{

	Renderer renderer(1280, 720);
	Core* core = new Core();
	Scene* myscene = new MyScene();
	
	Input::Init(renderer.window());

	while (myscene->isRunning()) {
		core->run(myscene, renderer);
		if (Input::GetKeyDown(KEYCODE_8)) {
			std::cout << "BLIEP" << std::endl;
		}	
	}
	delete myscene;

	// Close OpenGL window and terminate GLFW
	glfwTerminate();

	return 0;
}
