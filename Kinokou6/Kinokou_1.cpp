
#include <iostream>
#include "Character.h";
#include "Player.h";
#include "Enemy.h";

int main()
{
    Player Kinoko("Kinoko", "sword", 150, 20, 5, 180, 23, 74, 10);
    Enemy Porutobero("Porutobero", "Heavy Sword", 150, 20, 5, 180, 23, 74, 10);
    Kinoko.GetInfo();
    Kinoko.check_Health();
    Porutobero.GetInfo();

    Character* Porutoberopointer = &Porutobero;
    Kinoko.Recieve_XP(Porutoberopointer->get_XP(), Porutoberopointer->get_name());
}

