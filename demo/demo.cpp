// Include GLEW
#include <GL/glew.h>

// Include GLFW
#include <glfw3.h>

#include <p2d/renderer.h>
#include <p2d/camera.h>
#include <p2d/sprite.h>

#include "myscene.h"

int main( void )
{
	Renderer renderer(1280, 720);
		
	Scene* myScene = new MyScene();
	

	/*while (myscene->isRunning()) { // check status of Scene every frame
		core.run(myscene); // update and render the current scene
		core.showFrameRate(5); // show framerate in output every n seconds
	}*/

	do {
		// Clear the screen
		

		renderer.renderScene(myScene);

		
	} 
	while (glfwGetKey(renderer.window(), GLFW_KEY_ESCAPE) != GLFW_PRESS && glfwWindowShouldClose(renderer.window()) == 0);

	// Close OpenGL window and terminate GLFW
	glfwTerminate();

	return 0;
}
