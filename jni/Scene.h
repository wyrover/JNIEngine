#ifndef SCENE_H
#define SCENE_H

#include <list>
#include <time.h>

#include "BaseObject.h"
#include "ComOGLESProgram.h"

class Scene
{
private:
	OpenglESProgram* openglESProgram;
	std::list<BaseObject*> objects;
	long lastTime;

public:
	Scene();
	~Scene();
	void onSurfaceCreated();
	void onSurfaceChanged(int width, int height);
	void onDrawFrame();
	void addObj(BaseObject* obj, int zOrder = 0);
	void removeObj(BaseObject* obj);
	void clear();
	void setBgColor(float r, float g, float b, float alpha);

	inline float getHalfW() {
		return openglESProgram->getHalfW();
	}
	inline float getHalfH() {
		return openglESProgram->getHalfH();
	}
};

#endif // !SCENE_H
