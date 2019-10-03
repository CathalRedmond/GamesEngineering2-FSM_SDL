#pragma once
#include "Input.h"
class Command
{
public:
	virtual ~Command() {}
	virtual void execute() = 0;
protected:
	Command() {}
};

