#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
	Zombie *zombies	= new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		//좀비수가 정해짐
		//좀비 수 만큼 이름을 정해줌
		std::stringstream stream;
		stream << i + 1;
		zombies[i].nameSpeak(name + stream.str()); // 이친구는 이렇게 사용 해야만 합니다.
	}
	return (zombies);
}
