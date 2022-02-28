#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
	private:
		std::string name;
		unsigned int hitpoint;
		unsigned int Energy;
		unsigned int Attack;
	public:
		ClapTrap();
		ClapTrap( std::string name ); //Name (Parameter of constructor) 이 이야기 입니다.
		ClapTrap(const ClapTrap& ClapTrap)
		~ClapTrap();
		
		ClapTrap& operator=(const ClapTrap& claptrap);
		
		void attack(std::string const & target)
		void takeDamage(unsigned int amount)
		void beRepaired(unsigned int amount)
}; //안나와 있어서 안씀

#endif
