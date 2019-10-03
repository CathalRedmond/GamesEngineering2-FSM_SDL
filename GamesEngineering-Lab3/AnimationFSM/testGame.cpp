//#include "Game.h"
//
//Game::Game()
//{
//}
//
//Game::~Game()
//{
//}
//
//void Game::init()
//{
//	int flags = SDL_WINDOW_RESIZABLE;
//	if (SDL_Init(SDL_INIT_EVERYTHING) < 0)
//	{
//		std::cout << "Error Initialising SDL" << SDL_GetError() << std::endl;
//		isRunning = false;
//	}
//	else
//	{
//		window = SDL_CreateWindow("FSM-SDL", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, flags);
//		if (!window) std::cout << "Error Creating Window" << std::endl;
//
//		renderer = SDL_CreateRenderer(window, -1, 0);
//		if (!renderer) std::cout << "Error Creating Renderer" << std::endl;
//		SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
//		isRunning = true;
//	}
//	std::string path = "assets/test.png";
//	texture = IMG_LoadTexture(renderer, path.c_str());
//	if (!texture) std::cout << "Error Loading Texture" << SDL_GetError() << std::endl;
//
//
//	/*
//	
//	if(event.type == SDL_KEYDOWN || SDL_KEYUP)
//	{
//			if(event.key.keysym.sym == SDLK_(type letter here);
//
//	}
//	
//	*/
//
//}
//
//void Game::eventHandler()
//{
//	SDL_Event event;
//	SDL_PollEvent(&event);
//
//	switch (event.type)
//	{
//	case SDL_QUIT:
//		isRunning = false;
//		break;
//	default:
//		break;
//	}
//}
//
//void Game::update()
//{
//	count++;
//}
//
//void Game::render()
//{
//
//	SDL_RenderClear(renderer);
//	SDL_RenderCopy(renderer, texture, NULL, NULL);
//	SDL_RenderPresent(renderer);
//}
//
//void Game::clean()
//{
//	SDL_DestroyWindow(window);
//	SDL_DestroyRenderer(renderer);
//	SDL_QUIT;
//	std::cout << "Game Cleaned" << std::endl;
//}
//
//bool Game::running()
//{
//	return isRunning;
//}
