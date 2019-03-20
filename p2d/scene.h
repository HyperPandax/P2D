#ifndef SCENE_H
#define SCENE_H


#include <p2d/entity.h>
#include <p2d/camera.h>

class Scene : public Entity 
{
	public:
		Scene();
		virtual ~Scene();

		//void updateScene(float deltaTime);
		bool isRunning() { return _isRunning; };
		Camera* camera() { return _camera; };

		//void start() { _isRunning = true; };
		//void stop() { _isRunning = false; };

	private:
		//void _updateEntity(Entity* entity, float deltaTime);
		bool _isRunning;
		Camera* _camera;
};

#endif /* SCENE_H */
