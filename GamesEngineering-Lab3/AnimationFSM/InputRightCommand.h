#pragma once
#include "Command.h"
class InputRightCommand :
	public Command
{
public:
	InputRightCommand(Input& input) : m_input{ input } {}
	virtual void execute() { m_input.setCurrent(Input::Action::RIGHT); }
private:
	Input& m_input;
};

