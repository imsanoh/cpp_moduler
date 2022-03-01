#include "claptrap.hpp"

int	main(void)
{
	ClapTrap	a("A");
	ClapTrap	b("B");
	ClapTrap	c("C");

	a.attack("B"); // 'a' 가 'B'를 공격 했다.
	b.takeDamage(a.getDamage()); //td->
	b.attack("A");
	a.takeDamge(a.getDamage());
	c.attack("B");
	b.takeDamage(a.getDamage());
	a.beRepaired(25);//맨처음으로 돌리는거
	return (0);
}
