#include "Game.h"

Game::Game()
{
	if (SDL_Init(SDL_INIT_EVERYTHING) < 0)
	{
		throw getErrorString("Error Loading SDL");
		isRunning = false;
	}
	else
	{
		// create window
		m_window = SDL_CreateWindow("FiniteStateMachineSDL", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, NULL);
		if (!m_window)
		{
			std::cout << getErrorString("Error Loading Window") << std::endl;
		}
		// create renderer
		m_renderer = SDL_CreateRenderer(m_window, -1, 0);
		if (!m_renderer)
		{
			std::cout << getErrorString("Error Loading Renderer") << std::endl;
		}
		SDL_SetRenderDrawColor(m_renderer, 0, 0, 0, 255);
		isRunning = true;

		//load texture
		m_texture = IMG_LoadTexture(m_renderer, "assets/grid.png");
		if (!m_texture)
		{
			std::cout << getErrorString("Error Loading Texture") << std::endl;
		}
		m_animatedSprite = new AnimatedSprite(m_texture, 2000);

		SDL_Rect frame;
		frame.x = 3;
		frame.y = 3;
		frame.w = 84;
		frame.h = 84;
		m_animatedSprite->addFrame(frame);
		while (frame.x != 428)
		{
			frame.x += 85;
			m_animatedSprite->addFrame(frame);
		}

		m_keyboardHandler = new KeyboardInputHandler(m_input);
		m_player = new Player(m_animatedSprite);
	}
}

Game::~Game()
{
	cleanup();
}

void Game::run()
{
	while (isRunning)
	{
		processEvents();
		update();
		render();
	}
}

void Game::processEvents()
{
	SDL_Event event;
	SDL_PollEvent(&event);

	switch (event.type)
	{
	case SDL_QUIT:
		isRunning = false;
		break;
	default:
		break;
	}

	m_keyboardHandler->handleInput(m_input, event);

}

void Game::update()
{
	m_player->handleInput(m_input);
	m_player->update();
}

void Game::render()
{
	SDL_RenderClear(m_renderer);
	m_player->render(m_renderer);
	SDL_RenderPresent(m_renderer);
}

void Game::cleanup()
{
	SDL_DestroyTexture(m_texture);
	SDL_DestroyWindow(m_window);
	SDL_DestroyRenderer(m_renderer);
	SDL_QUIT;
}

std::string Game::getErrorString(std::string t_errorMsg)
{
	std::string sdlError = SDL_GetError();
	return t_errorMsg += " " + sdlError;
}
