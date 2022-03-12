#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"
//  여기가 하위클래스     여기가 상속받을 클래스
class ScavTrap : public ClapTrap //이게 상속 하는 방식 입니다. 상속이 포인트
{
	private:
		/* data */
	public:
		ScavTrap());
		ScavTrap(const ScavTrap &ref);
		~ScavTrap();
		ScavTrap& operator=(const ScavTrap &ref);
};

#endif