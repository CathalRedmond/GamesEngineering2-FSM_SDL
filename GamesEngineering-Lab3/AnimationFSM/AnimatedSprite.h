#ifndef ANIMATED_SPRITE_H
#define ANIMATED_SPRITE_H

#include <SDL.h>
#include <vector>
#include <Debug.h>

#include <chrono>
//typedef std::chrono::high_resolution_clock Clock;

using namespace std;


class AnimatedSprite {
public:
	AnimatedSprite(const SDL_Texture& texture, int numberOfFrames, int m_width, int m_height);
	~AnimatedSprite();

	const std::pair<SDL_Rect

	const vector<SDL_Rect>& getFrames();
	const IntRect& getFrame(int);
	void addFrame(SDL_Rect&);
	const int getCurrentFrame();
	void update();
	
private:
	Clock m_clock;
	Time m_time;
	vector<SDL_Rect> m_frames;
	int m_current_frame;
};

#endif // !ANIMATED_SPRITE_H
