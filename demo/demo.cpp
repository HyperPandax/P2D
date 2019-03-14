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
	//delete myscene;
	
	//Sprite* pencils = new Sprite("assets/pencils.tga");
	float rot_z = 0.0f;

	
	do {
		// Clear the screen
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

		//renderer.renderSprite(pencils, 400, 300, 1.0f, 1.0f, 0.0f);
		rot_z += 0.03f;

		renderer.renderScene(myScene);
		// Swap buffers
		glfwSwapBuffers(renderer.window());
		glfwPollEvents();
	} 
	while (glfwGetKey(renderer.window(), GLFW_KEY_ESCAPE) != GLFW_PRESS && glfwWindowShouldClose(renderer.window()) == 0);

	//delete pencils;
	// Close OpenGL window and terminate GLFW

	glfwTerminate();

	return 0;
}
