#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	private:
		std::string _name;
		Weapon	*weapon;
	public:
		HumanB(std::string _name);
		void attack();
		void setWeapon(Weapon &weapon);
		~HumanB();
};

#endif
