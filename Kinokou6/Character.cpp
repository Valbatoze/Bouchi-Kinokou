#include "Character.h";
#include <iostream>;
#include <list>;
using namespace std;
Character::Character(string name, string weapon, float hp, float dmg, int gold, float xp, float def, float mv_spd, float atk_spd) {
	Name = name;
	Weapon = weapon;
	HP = hp;
	Dmg = dmg;
	Gold = gold;
	XP = xp;
	Def = def;
	Move_speed = mv_spd;
	Atk_SPD = atk_spd;

};
string Character::get_name() {
	return Name;
};
float Character::get_XP() {
	return XP;
};
void Character::GetInfo() {
	cout << "\n\n" << endl;
	cout << "Name : " << Name << endl;
	cout << "Weapon : " << Weapon << endl;
	cout << "Health : " << HP << endl;
	cout << "Gold : " << Gold << endl;
	cout << "XP : " << XP << endl;
	cout << "defense : " << Def << endl;
	cout << "Move speed : " << Move_speed << endl;
	cout << "Attack speed : " << Atk_SPD << endl;
	cout << Name + "'s " << "Moves : " << endl;
	display_moves();
}
void Character::display_moves() {
	for (string move : Moves) {
		cout << move << endl;
	}
};
void Character::add_moves(string move) {
	Moves.push_back(move);
};
void Character::get_damaged() {
	if (HP >= 60) {
		HP = HP - 60;
	}
};
void Character::check_Health() {
	if (HP < 40) {
		cout << Name + "'s health is " << HP << endl;
		cout << Name + "'s health is very low !!" << endl;
	}
	else
	{
		cout << Name + "'s health is " << HP << endl;
		cout << Name + "'s health is good !!" << endl;
	};
};
