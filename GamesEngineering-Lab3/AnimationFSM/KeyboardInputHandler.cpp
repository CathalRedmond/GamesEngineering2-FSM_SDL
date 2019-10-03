#include "KeyboardInputHandler.h"

KeyboardInputHandler::KeyboardInputHandler(Input& t_input):
	m_input{t_input}
{
	ActionIdleCommand = new InputIdleCommand(m_input);
	ActionUpCommand = new InputUpCommand(m_input);
	ActionLeftCommand = new InputLeftCommand(m_input);
	ActionRightCommand = new InputRightCommand(m_input);
}

void KeyboardInputHandler::handleInput(Input& t_input, SDL_Event t_event)
{
	if (SDL_KEYDOWN == t_event.type)
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
