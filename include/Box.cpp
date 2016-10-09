#include "Box.h"
using namespace cocos2d;

Box::Box()
{
}

Box* Box::boxWithSizeAndPosition(Vector3D size, Vector3D position)
{

	Box *box = new Box();
	box->setPosition(position);
	box->setSize(size);
	box->autorelease();
	return box;
}

void Box::setPosition(Vector3D vector)
{
	position = vector;
}

void Box::setSize(Vector3D vector)
{
	size = vector;
}

Vector3D Box::getSize()
{
	return size;
}

void Box::draw()
{
	GLfloat maxX = size.x / 2.0f;
	GLfloat minX = maxX * -1;
	GLfloat maxY = size.y / 2.0f;
	GLfloat miny = maxY * -1;

	const GLfloat frontVertices[] = {
		minX, miny, size.z,
		maxX, miny, size.z,
		minX, maxY, size.z,
		maxX, maxY, size.z,
	};

	const GLfloat backVertices[] = {
		minX, miny, 0.0f,
		minX, maxY, 0.0f,
		maxX, miny, 0.0f,
		maxX, maxY, 0.0f,
	};

	const GLfloat leftVertices[] = {
		minX, miny, size.z,
		minX, maxY, size.z,
		minX, miny, 0.0f,
		minX, maxY, 0.0f,
	};

	const GLfloat rightVertices[] = {
		maxX, miny, 0.0f,
		maxX, maxY, 0.0f,
		maxX, miny, size.z,
		maxX, maxY, size.z,
	};

	const GLfloat topVertices[] = {
		minX, maxY, size.z,
		maxX, maxY, size.z,
		minX, maxY, 0.0f,
		maxX, maxY, 0.0f,

	};

	const GLfloat bottomVertices[] = {
		minX, miny, size.z,
		minX, miny, 0.0f,
		maxX, miny, size.z,
		maxX, miny, 0.0f,
	};


	glEnable(GL_CULL_FACE);
	glCullFace(GL_BACK);
	glDisableClientState(GL_COLOR_ARRAY);
	glDisableClientState(GL_TEXTURE_COORD_ARRAY);

	glLoadIdentity();

	cocos2d::gluLookAt(0, 0, 5, 0, 0, 0, 0, 1, 0);

	glTranslatef(position.x, position.y, position.z);

	glVertexPointer(3, GL_FLOAT, 0, frontVertices);
	glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
	glDrawArrays(GL_TRIANGLE_STRIP, 0, 4);

	glVertexPointer(3, GL_FLOAT, 0, backVertices);
	glDrawArrays(GL_TRIANGLE_STRIP, 0, 4);

	glVertexPointer(3, GL_FLOAT, 0, leftVertices);
	glColor4f(0.5f, 0.5f, 0.5f, 1.0f);
	glDrawArrays(GL_TRIANGLE_STRIP, 0, 4);

	glVertexPointer(3, GL_FLOAT, 0, rightVertices);
	glDrawArrays(GL_TRIANGLE_STRIP, 0, 4);

	glVertexPointer(3, GL_FLOAT, 0, topVertices);
	glColor4f(0.7f, 0.7f, 0.7f, 1.0f);
	glDrawArrays(GL_TRIANGLE_STRIP, 0, 4);

	glVertexPointer(3, GL_FLOAT, 0, bottomVertices);
	glDrawArrays(GL_TRIANGLE_STRIP, 0, 4);

	glEnableClientState(GL_COLOR_ARRAY);
	glEnableClientState(GL_TEXTURE_COORD_ARRAY);
	glDisable(GL_CULL_FACE);
	glColor4f(1.0f, 1.0f, 1.0f, 1.0f);

}