#include "KeyboardInputHandler.h"

void KeyboardInputHandler::handleInput(Input& t_input, SDL_Event t_event)
{
	if (SDL_KEYUP == t_event.type)
	{
		if (SDLK_UP == t_event.key.keysym.sym)
		{
			ActionUpCommand->execute();
		}
		else if (SDLK_LEFT == t_event.key.keysym.sym)
		{
			ActionLeftCommand->execute();
		}
		else if (SDLK_RIGHT == t_event.key.keysym.sym)
		{
			ActionRightCommand->execute();
		}
	}
	else
	{
		ActionIdleCommand->execute();
	}
}
