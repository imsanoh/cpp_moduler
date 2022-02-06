#include "HumanA.hpp"

HumanA::HumanA(std::string _name, Weapon &weapon) : _name(_name), weapon(weapon)
{
}

HumanA::~HumanA()
{
}

void HumanA::attack()
{
	std::cout << this->_name << "attacks with his" << weapon.getType() << std::endl;
}
//this -> 포인터
