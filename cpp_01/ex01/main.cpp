#include "Zombie.hpp"

int main(void)
{
	Zombie *zombies;

	int N = 5;

	zombies = zombieHorde(N, "zombie");
	for (int i = 0; i < N; i++)
	{
		zombies[i].announce();
	}
	delete []zombies;
	return 0;
}

//참조 . 포인터 ->
//함수 보는거 구현 하는거