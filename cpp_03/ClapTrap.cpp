#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	name
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

}

void ClapTrap::takeDamage(unsigned int amount)
{

}

void ClapTrap::beRepaired(unsigned int amount)
{
	
}


//생성자의 규칙 알아보기
//맴버 초기화 리스트 