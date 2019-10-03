#pragma once
#include <SDL.h>
#include "SDL_image.h"
#include <iostream>
class testGmae
{
public:
	testGmae();
	~testGmae();

	void init();
	void eventHandler();
	void update();
	void render();
	void clean();

	bool running();
private:
	bool isRunning;
	SDL_Window *window;
	SDL_Renderer *renderer;

	int count;

	SDL_Texture* texture;
};

