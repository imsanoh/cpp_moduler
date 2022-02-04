#include "Zombie.hpp"

Zombie *newZombie(std::string name)
{
	Zombie *zombie = new Zombie(name);
	return zombie;
}
//클래스는 대문자 내가 선언 하는건 소문자