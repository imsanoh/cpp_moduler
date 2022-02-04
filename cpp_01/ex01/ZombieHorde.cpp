#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
	Zombie *zombies	= new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		//좀비수가 정해짐
		//좀비 수 만큼 이름을 정해줌

		zombies[i].nameSpeak(name);
	}
	return (zombies);
}
// zombies == &zombies[0]