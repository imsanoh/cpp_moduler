#include "Zombie.hpp"

int main()
{
	Zombie	zombie("3");
	Zombie *newZ;

	zombie.announce();
	newZ = newZombie("2");
	randomChump("1");
	newZ->announce();
	delete newZ;
}
