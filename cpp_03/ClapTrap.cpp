#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	name = "something";
	hitpoint = 10;
	energy = 10;
	damage = 0;
}

ClapTrap::ClapTrap( std::string str )
{
	*this = ref;
}

ClapTrap::~ClapTrap()
{
}

ClapTrap& ClapTrap::operator=(const ClapTrap &ref)
{
	return (*this);
}

void	ClapTrap::attack(std::string const& target)
{
	std::cout << "ClapTrap : " << std::endl;
	std::cout << name << "attack " 
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (amount < hitpoint)
	{
		hitpoint -= amount;
		std::cout << name << "take " << amount << " HP level : " << hitpoint << std::endl;
	}
	else
	{
		hitpoint = 0;
		std::cout << name << "dead" << hitpoint << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	
}


//생성자의 규칙 알아보기
//맴버 초기화 리스트 