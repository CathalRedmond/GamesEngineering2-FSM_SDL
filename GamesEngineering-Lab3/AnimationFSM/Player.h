#ifndef PLAYER_H
#define PLAYER_H

#include <Input.h>
#include <PlayerFSM.h>
#include <AnimatedSprite.h>
#include "Climbing.h"
#include "Jumping.h"
#include "Falling.h"
#include "Walking.h"
#include "Idle.h"

class Player
{
private:
	PlayerFSM m_state;
	AnimatedSprite* m_animated_sprite;
	Player();

public:
	Player(AnimatedSprite*);
	~Player();
	void handleInput(Input);
	void update();
	void render(SDL_Renderer* renderer);
};

#endif // !PLAYER_H
