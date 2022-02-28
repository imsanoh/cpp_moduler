#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
	private:
		/* data */
	public:
		ClapTrap(/* args*/);
		ClapTrap(const ClapTrap &ref);
		~ClapTrap();
		ClapTrap& operator=(const ClapTrap &ref);
};

#endif