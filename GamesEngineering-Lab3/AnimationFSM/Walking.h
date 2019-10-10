#pragma once
#include "State.h"
class Walking :
	public State
{
public:
	Walking() {};
	~Walking() {};
	void handleInput() {}
	void update() {}
	void idle(PlayerFSM* a);
};

