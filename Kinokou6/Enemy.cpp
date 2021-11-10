#include "Enemy.h"
#include <iostream>;
#include <list>;
void Enemy::Action() {
	cout << "I am the Enemy and my name is " + Name << endl;
}
void Enemy::Give_xp() {
	cout << "i am " + Name + " and i give " << XP << " XP" << endl;
}
