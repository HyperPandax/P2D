#ifndef MYENTITY_H
#define MYENTITY_H

#include <p2d/entity.h>

class MyEntity : public Entity
{
public:
	MyEntity();
	virtual ~MyEntity();
	virtual void update(float deltaTime);

private:

};
#endif /* MYENTITY_H */
