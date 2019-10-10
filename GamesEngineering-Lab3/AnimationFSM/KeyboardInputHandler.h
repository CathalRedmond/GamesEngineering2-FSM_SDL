#pragma once
#include "InputIdleCommand.h"
#include "InputUpCommand.h"
#include "InputLeftCommand.h"
#include "InputRightCommand.h"
#include "InputDownCommand.h"
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
	Command* ActionDownCommand;
	Input& m_input;
	SDL_Keycode lastKeyPressed;
};


