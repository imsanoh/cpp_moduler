#ifndef HUMANB_HPP
# define HUMANB_HPP

class HumanB
{
	private:
		std::string _name;
		Weapon	*weapon;
	public:
		HumanB(std::string _name);
		void attack();
		~HumanB();
};

#endif


//std::string 
//