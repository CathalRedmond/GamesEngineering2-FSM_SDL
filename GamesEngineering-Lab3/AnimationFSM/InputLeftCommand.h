#pragma once
#include "Command.h"
class InputLeftCommand :
	public Command
{
public:
	InputLeftCommand(Input& input) : m_input{ input } {}
	virtual void execute() { m_input.setCurrent(Input::Action::LEFT); }
private:
	Input& m_input;
};

