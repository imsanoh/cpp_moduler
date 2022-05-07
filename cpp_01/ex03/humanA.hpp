#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
	private:
		std::string _name;
		Weapon &weapon;//두개 다가 가져와야하니까??
	public:
		HumanA(std::string _name, Weapon &weapon);// 계속 가지고 잇는중?
		void attack();
		~HumanA();
};

#endif


