#ifndef HUMANA_HPP
# define HUMANA_HPP

class HumanA
{
	private:
		std::string _name;
		Weapon *weapon;
	public:
		HumanA(std::string _name, Weapon &weapon);// 계속 가지고 잇는중?
		void attack();
		void give_weapon(Weapon &weapon);
		~HumanA();
};

#endif


