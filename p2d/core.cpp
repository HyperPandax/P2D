

#include <p2d/core.h>
#include <p2d/input.h>
Core::Core()
{
	_deltaTime = 0;

	
	//Renderer _renderer(1280, 720);
}

Core::~Core()
{

}

void Core::run(Scene* scene, Renderer& ren)
{
	_calculateDeltaTime();
	//std::cout << "123" << std::endl;

	// Update Input singleton instance
	/*Singleton<Input>::instance()->updateInput(_renderer.window());

	// Update camera instance in Scene
	scene->camera()->updateCamera((float)_deltaTime);

	// Update Scene (and recursively all children)
	scene->updateScene((float)_deltaTime);*/
	scene->update((float)_deltaTime);

	ren.renderScene(scene);

	// user clicked the 'close' button in the window
	if (glfwGetKey(ren.window(), GLFW_KEY_ESCAPE) != GLFW_PRESS && glfwWindowShouldClose(ren.window()) == 1) { scene->stop(); }


}
double Core::_calculateDeltaTime()
{
	static double lastTime = glfwGetTime();
	double startTime = glfwGetTime();
	_deltaTime = startTime - lastTime;
	lastTime = startTime;

	return _deltaTime;
}