#include "Zombie.hpp"

int main()
{
	Zombie *zombies;

	int N = 20;

	zombies = zombieHorde(N, "sanoh");
	for (int i = 0; i < N; i++)
	{
		zombies[i].announce();
	}
	delete []zombies;
}

//참조 . 포인터 ->
//함수 보는거 구현 하는거