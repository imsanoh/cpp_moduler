#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
}

ClapTrap::ClapTrap(const ClapTrap &ref)
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



//생성자의 규칙 알아보기
//맴버 초기화 리스트 