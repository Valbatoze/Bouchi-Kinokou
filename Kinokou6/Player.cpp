#include "Player.h"
#include <iostream>;
#include <list>;
using namespace std;
void Player::Action() {
	cout << "I am the Player and my name is " + Name << endl;
}
void Player::Recieve_XP(float xp, string name) {
	cout << "my xp before the kill : " << XP << endl;
	XP = XP + xp;
	cout << "i got " << xp << " from " + name + " and my XP became " << XP << endl;
}