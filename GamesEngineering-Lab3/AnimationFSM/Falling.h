#pragma once
#include "State.h"
class Falling :
	public State
{
public:
	Falling() {};
	~Falling() {};
	void handleInput() {};
	void update() {};
	void idle(PlayerFSM* a);
};

