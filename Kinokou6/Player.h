#include "Character.h";
#pragma once
class Player :public Character 
{
public:
	Player(string name, string weapon, float hp, float dmg, int gold, float xp, float def, float mv_spd, float atk_spd) :Character(name, weapon, hp, dmg, gold, xp, def, mv_spd, atk_spd) {

	}
	void Action();
	void Recieve_XP(float xp, string name);
};

