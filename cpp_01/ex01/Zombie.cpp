#include "Zombie.hpp"

// 외부에서 받아오는거 (생성자)
Zombie::Zombie(std::string name)
{
	this->_name = name;
	std::cout << "name : " << this->_name <<std::endl;
}

//소멸자
Zombie::~Zombie(void)
{
	std::cout << "dead" <<std::endl;
	std::cout << this->_name << std::endl;
}

void Zombie::announce(void)
{
	std::cout << "<" << this->_name << ">" << "BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::nameSpeak(std::string name)
{
	this->_name = name;
	std::
}