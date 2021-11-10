#pragma once
#include <iostream>;
#include <list>;
using namespace std;

class Character
{
private:
	string Weapon;
	float HP;
	float Dmg;
	int Gold;
	float Def;
	float Move_speed;
	float Atk_SPD;
	list<string> Moves;
protected:
	string Name;
	float XP;
public:
	Character(string name, string weapon, float hp, float dmg, int gold, float xp, float def, float mv_spd, float atk_spd);
	void GetInfo();
	string get_name();
	float get_XP();
	void display_moves();
	void add_moves(string move);
	void get_damaged();
	void check_Health();

};

