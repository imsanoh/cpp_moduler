#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	name = "something";
	hitpoint = 10;
	energy = 10;
	damage = 0;
	std::cout << "[ClapTrap] : ";
	std::cout << name << " : ClapTrap default constructor is called" << std::endl;
};

ClapTrap::ClapTrap( std::string str )
{
	name = str;
	hitpoint = 10;
	energy = 10;
	damage = 0;
	std::cout << "[ClapTrap] : ";
	std::cout << name << " : ClapTrap string constructor is called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &claptrap)
{
	this->name = claptrap.name;
	this->hitpoint = claptrap.hitpoint;
	this->energy = claptrap.energy;
	this->damage = claptrap.damage;
	std::cout << "[ClapTrap] : ";
	std::cout << name << " : ClapTrap destructor is called" << std::endl;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "[ClapTrap] : ";
	std::cout << name << " : ClapTrap destructor is called" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "[ClapTrap] : ";
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

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "[ClapTrap] : ";
	hitpoint += amount;
	std::cout << name " is repaired " << amount << " points of heal! [HP] :" << hitpoint << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	return (damage);
}
//생성자의 규칙 알아보기
//맴버 초기화 리스트
