#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
	private:
		void name;
		int hitpoint;
		void Energy;
		void Attack;
	public:
		ClapTrap();
		~ClapTrap();
		
		ClapTrap& operator=(const ClapTrap &ref);
		
		void attack(std::string const & target)
		void takeDamage(unsigned int amount)
		void beRepaired(unsigned int amount)
};

#endif
