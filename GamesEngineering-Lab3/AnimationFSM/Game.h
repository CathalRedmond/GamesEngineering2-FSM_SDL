#pragma once
#include <SDL.h>
#include <SDL_image.h>
#include <iostream>
#include <string>
#include <AnimatedSprite.h>
#include <Player.h>
#include <Input.h>
#include <Debug.h>
#include "KeyboardInputHandler.h"

class Game
{
public:

	Game();
	~Game();

	void run();

private:
	void processEvents();
	void update();
	void render();
	void cleanup();
	// window used in the program
	SDL_Window* m_window;

	// used for drawing things onto the screen
	SDL_Renderer* m_renderer;

	// texture
	SDL_Texture* m_texture;

	// if game loop is happening
	bool isRunning;

	std::string getErrorString(std::string t_errorMsg);

	KeyboardInputHandler m_keyboardHandler;
	Input m_input;
	Player m_player;

};

