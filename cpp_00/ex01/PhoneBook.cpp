#include "PhoneBook.hpp"

Phonebook::Phonebook()
{
	reset = 0;
	count = 0;
}

Phonebook::~Phonebook()
{
}

void	Phonebook::add()
{
	if (reset == 8)//어디에 쓰는건가요? -> 8개가 채워지면 다시 0으로 초기화 해줍니다.
		reset = 0;
	contacts[reset].set_information(); // -> 이게 그럼 8개가 되면 다시 0으로 가겠지요?
	reset++;
	if (count < 8)//어디에 쓰는건가요? -> 8갸 까지 올려주는거 입니다,
		count++;
}

void	Phonebook::show()//줄을 보여줍니다 
{
	std::cout << " something" << std::endl;

	for (unsigned int i = 0; i < this->count; i++)
	{
		std::cout << "|" << std::setw(10) << i + 1 << "|";//10칸 확보 
		if (this->contacts[i].get_FirstName().length() > 9)//안에 넣는 작업
			std::cout << this->contacts[i].get_FirstName().substr(0, 9) << ".|";
		else
			std::cout << std::setw(10) << this->contacts[i].get_FirstName() << "|";

		if (this->contacts[i].get_LastName().length() > 9)
			std::cout << this->contacts[i].get_LastName().substr(0, 9) << ".|";
		else
			std::cout << std::setw(10) << this->contacts[i].get_LastName() << "|";

		if (this->contacts[i].get_NickName().length() > 9)
			std::cout << this->contacts[i].get_NickName().substr(0, 9) << ".|";
		else
			std::cout << std::setw(10) << this->contacts[i].get_NickName() << "|";

		if (this->contacts[i].get_PhoneNumber().length() > 9)
			std::cout << this->contacts[i].get_PhoneNumber().substr(0, 9) << ".|" << std::endl;
		else
			std::cout << std::setw(10) << this->contacts[i].get_PhoneNumber() << "|" <<std::endl;
	}
}

void	Phonebook::show_contacts(unsigned int index)
{
	this->contacts[index].show_information();//참조자
}

void	Phonebook::search()
{
	unsigned int	index;

	if (this->count == 0)
		std::cout << "PhoneBook is Empty" << std::endl;//
	else
	{
		this->show();
		while (true)
		{
			std::cout << "Enter an index of searching contact or 0  " << std::endl;
			if ((std::cin >> index) && (index == 0 || index - 1 < this->count))
			{
				if (index - 1 < this->count)
				{
					this->show_contacts(index - 1);
					//cin.clear()를 통해 에러비트를 초기화하고, cin.ignore()를 통해 두 번째 인자인 개행으로 버퍼를 계속 비워주겠다는 뜻이다.
					std::cin.ignore(1, '\n');//getline-? 대신 사용하는겁니다.
					break ;
				}
				else
				{//cin.clear()를 통해 에러비트를 초기화하고, cin.ignore()를 통해 두 번째 인자인 개행으로 버퍼를 계속 비워주겠다는 뜻이다.
					std::cin.clear();//-> 내부 상태 플래그를 초기화 시킴 -> 결국 cin 이 정상적으로 작동하게 하기 위해서.
					std::cin.ignore(1, '\n');//무시하는길이
					break ;
				}
			}
			else
			{
				std::cin.clear();
				std::cin.ignore(1, '\n');
				std::cout << "Invalid index!" << std::endl;
			}
		}
	}
}
//일단 서치 고치기 1. 0일때만 나가게하기 2. 안덱스찾으면 그 줄만 보여주기 