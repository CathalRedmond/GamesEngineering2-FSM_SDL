#include <AnimatedSprite.h>

AnimatedSprite::AnimatedSprite(SDL_Texture* texture, int speed):
m_texture{texture},
m_speed{speed}
{
	m_current_frame = 0;
	destRect.w = 80;
	destRect.h = 80;
	m_startFrame = m_current_frame;
}

AnimatedSprite::~AnimatedSprite()
{
}

void AnimatedSprite::update()
{
	m_current_frame = static_cast<int>((SDL_GetTicks() / m_speed) % 6);
	m_current_frame += m_startFrame;
}

void AnimatedSprite::render(SDL_Renderer* t_renderer)
{
	SDL_RenderCopy(t_renderer, m_texture, &m_frames[m_current_frame], &destRect);
}

void AnimatedSprite::addFrame(SDL_Rect t_rect)
{
	m_frames.push_back(t_rect);
}

void AnimatedSprite::setStartFrame(int startFrame)
{
	m_current_frame = 0;
	m_startFrame = startFrame;
}
