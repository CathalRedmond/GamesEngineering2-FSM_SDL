#include <iostream>
#include <Player.h>
#include <Idle.h>
#include <Debug.h>

Player::Player(AnimatedSprite* s) : m_animated_sprite(s)
{
	m_state.setCurrent(new Idle());
	m_state.setPrevious(new Idle());
}

Player::~Player() {}

void Player::handleInput(Input in)
{
	DEBUG_MSG("Handle Input");

	State* lastState = m_state.getCurrent();
	switch (in.getCurrent())
	{
	case Input::Action::IDLE:
		//std::cout << "Player Idling" << std::endl;
		m_state.idle();
		if (m_state.getCurrent() != lastState)
			m_animated_sprite->setStartFrame(0);
		break;
	case Input::Action::LEFT:
		//std::cout << "Player Left" << std::endl;
		m_state.walking();
		if(m_state.getCurrent() != lastState)
			m_animated_sprite->setStartFrame(6);
		break;
	case Input::Action::RIGHT:
		//std::cout << "Player Idling" << std::endl;
		m_state.jumping();
		if (m_state.getCurrent() != lastState)
			m_animated_sprite->setStartFrame(12);
		break;
	case Input::Action::UP:
		//std::cout << "Player Up" << std::endl;
		m_state.climbing();
		if (m_state.getCurrent() != lastState)
			m_animated_sprite->setStartFrame(18);
		break;
	case Input::Action::DOWN:
		m_state.falling();
		if (m_state.getCurrent() != lastState)
			m_animated_sprite->setStartFrame(24);
	default:
		break;
	}

}

void Player::update()
{
	//std::cout << "Handle Update" << std::endl;
	m_animated_sprite->update();
}

void Player::render(SDL_Renderer* renderer)
{
	m_animated_sprite->render(renderer);
}
