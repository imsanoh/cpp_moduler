#include "HumanB.hpp"

HumanB::HumanB(std::string _name) : _name(_name)
{
}

HumanB::~HumanB()
{
}

void HumanB::attack()
{
	std::cout << this->_name << "attacks with his" << weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}