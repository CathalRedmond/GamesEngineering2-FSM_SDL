#ifndef JUMPING_H
#define JUMPING_H

#include <State.h>

class Jumping : public State
{
public:
	Jumping() {};
	~Jumping() {};
	void idle(PlayerFSM* a);
	void falling(PlayerFSM* a);
};

#endif // !IDLE_H