#pragma once
#include "Command.h"
class InputDownCommand :
	public Command
{
public:
	InputDownCommand(Input& input) : m_input{ input } {}
	virtual void execute() { m_input.setCurrent(Input::Action::DOWN); }
private:
	Input& m_input;
};

