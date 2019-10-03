#pragma once
#include "InputIdleCommand.h"
#include "InputUpCommand.h"
#include "InputLeftCommand.h"
#include "InputRightCommand.h"
#include <SDL.h>

class KeyboardInputHandler
{
public:
	void handleInput(Input& t_input, SDL_Event t_event);
private:
	Command* ActionIdleCommand = new InputIdleCommand(m_input);
	Command* ActionUpCommand = new InputUpCommand(m_input);
	Command* ActionLeftCommand = new InputLeftCommand(m_input);
	Command* ActionRightCommand = new InputRightCommand(m_input);
	Input& m_input;
};

