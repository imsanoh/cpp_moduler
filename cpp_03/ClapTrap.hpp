#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
	private:
		std::string name;
		unsigned int hitpoint;
		unsigned int energy;
		unsigned int attack;
		unsigned int damage;
	public:
		ClapTrap();
		ClapTrap( std::string name ); //Name (Parameter of constructor) 이 이야기 입니다.
		ClapTrap(const ClapTrap& ClapTrap);
		~ClapTrap();//소멸자 입니다.

		ClapTrap& operator=(const ClapTrap& claptrap);

		void attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		unsigned int getDamage(void) const;
}; //안나와 있어서 안씀

#endif
