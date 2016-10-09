#ifndef _BOX_h
#define _BOX_h

#include "cocos2d.h"
#include "OpenGLCommon.h"

class Box : public cocos2d::CCNode
{

public:
	Box();
	virtual void draw();
	static Box* boxWithSizeAndPosition(Vector3D size, Vector3D position);
	void setPosition(Vector3D vector);
	void setSize(Vector3D vector);
	Vector3D getSize();

private:
	Vector3D position;
	Vector3D size;
};

#endif
