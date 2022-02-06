#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type(type)//근데 이게 더 괜찮음
{
	//this->type = type 이것도 가능이긴 함 
}

Weapon::~Weapon()
{
}

const std::string &Weapon::getType()//다른 함수가 내용을 바꾸지 않기 위해서
{
	return type;
}

void Weapon::setType(std::string type)
{
	this->type = type;
}