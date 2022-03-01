#include "claptrap.hpp"

int	main(void)
{
	ClapTrap	a("A");
	ClapTrap	b("B");
	ClapTrap	c("C");

	a.attack("B"); // 'a' 가 'B'를 공격 했다.
	b.takeDamage(a.getDamage()); //
}
