#pragma once
#include "Entity.h"

#define BRICK_BBOX_WIDTH  16
#define BRICK_BBOX_HEIGHT 16



class Brick : public Entity
{
	
	float ventDirection;

public:
	float frameW, frameH;
	virtual void Render();
	virtual void GetBoundingBox(float& l, float& t, float& r, float& b);
	Brick(float frameW, float frameH);
	void SetVentDirection(int v) { ventDirection = v; }
	int GetVentDirection() { return this->ventDirection; }
};