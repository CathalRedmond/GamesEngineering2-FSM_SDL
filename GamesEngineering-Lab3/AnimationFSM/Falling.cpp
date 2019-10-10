#include <Idle.h>

#include "Falling.h"

void Falling::idle(PlayerFSM* a)
{
	std::cout << "Falling -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
