#ifndef _OPENGL_COMMON_H
#define _OPENGL_COMMON_H

#include "cocos2d.h"

typedef struct {

	float x;
	float y;
	float z;

} Vector3D;

static inline Vector3D vec(const float x, const float y, const float z)
{
	Vector3D v;
	v.x = x;
	v.y = y;
	v.z = z;
	return v;
}

#endif
