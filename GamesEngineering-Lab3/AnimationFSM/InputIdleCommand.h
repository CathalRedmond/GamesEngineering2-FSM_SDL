#pragma once
#include "Command.h"
class InputIdleCommand :
	public Command
{
public:
	InputIdleCommand(Input& input) : m_input{ input } {}
    virtual void execute() { m_input.setCurrent(Input::Action::IDLE); }
private:
	Input& m_input;
};

