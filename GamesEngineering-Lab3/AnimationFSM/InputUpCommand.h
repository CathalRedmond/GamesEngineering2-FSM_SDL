#pragma once
#include "Command.h"
class InputUpCommand :
	public Command
{
public:
	InputUpCommand(Input& input) : m_input{ input } {}
	virtual void execute() { m_input.setCurrent(Input::Action::UP); }
private:
	Input& m_input;
};

