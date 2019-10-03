#ifndef ANIMATED_SPRITE_H
#define ANIMATED_SPRITE_H

#include <SDL.h>
#include <vector>
#include <Debug.h>

using namespace std;

class AnimatedSprite  {
public:
	AnimatedSprite(SDL_Texture* texture, int speed);
	~AnimatedSprite();

	void update();
	void render(SDL_Renderer* t_renderer);
	void addFrame(SDL_Rect t_rect);
	
private:
	vector<SDL_Rect> m_frames;
	int m_current_frame;
	SDL_Texture* m_texture;
	int m_speed;
	SDL_Rect destRect;
};

#endif // !ANIMATED_SPRITE_H
