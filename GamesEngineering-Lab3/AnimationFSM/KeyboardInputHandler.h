#pragma once
#include "InputIdleCommand.h"
#include "InputUpCommand.h"
#include "InputLeftCommand.h"
#include "InputRightCommand.h"
#include <SDL.h>

class KeyboardInputHandler
{
public:
	KeyboardInputHandler(Input& t_input);
	void handleInput(Input& t_input, SDL_Event t_event);
private:
	Command* ActionIdleCommand;
	Command* ActionUpCommand;
	Command* ActionLeftCommand;
	Command* ActionRightCommand;
	Input& m_input;
};


