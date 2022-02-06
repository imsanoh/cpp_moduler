#include "Weapon.hpp"

Weapon::Weapon()
{	
}

Weapon::Weapon(const Weapon &ref)
{
	*this = ref;
}

Weapon::~Weapon()
{
}

Weapon& Weapon::operator=(const Weapon &ref)
{
	return (*this);
}