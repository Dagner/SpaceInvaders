#pragma once
#include "Paddle.h"
// oTRO COMENT
class Contender: public Paddle {
public:
	float vely;
	Contender(float x, float y, float w, float h);
	Contender();
	void update(float x, float y, float vx);

};