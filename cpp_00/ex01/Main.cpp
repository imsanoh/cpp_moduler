#include "PhoneBook.hpp"

int main()
{
	PhoneBook		phonebook;
	std::string		cmd;

	std::cout << "폰북에 온것을 환영합니다." << std::endl;
	while (cmd.compare ("EXIT"))
	{
		std::cout << "명령어를 입력하십시오" << std::endl;
		std::getline(std::cin, cmd);
		if (!cmd.compare("ADD"))
			phonebook.add();
		if(cmd.compare("SEARCH"))
			phonebook.search();
			phonebook.show();
		if(cmd.compare("EXIT"))
			break;
		else
		std::cout << "command not fount" << std::endl;
	}
}

void	PhoneBook::show_contact(unsigned int index)
{
	this->contacts[index].show_information();
}

void	PhoneBook::search() // 내 방식으로 바꾸기
{
	unsigned int	index;

	if (this->amount == 0)
		std::cout << "Phonebook is empty!" << std::endl;
	else
	{
		this->show();
		while (true)
		{
			std::cout << "Enter an index of searching contact or 0 to exit" << std::endl;
			if ((std::cin >> index) && (index == 0 || index - 1 < this->amount))
			{
				if (index - 1 < this->amount)
				{
					this->show_contact(index - 1);
					std::cin.ignore(100000000000, '\n');//getline
					break ;
				}
				else
				{
					std::cin.clear();//??
					std::cin.ignore(100000000000, '\n');//무시하는길이 ??
					break ;
				}
			}
			else
			{
				std::cin.clear();
				std::cin.ignore(100000000000, '\n');
				std::cout << "Invalid index!" << std::endl;
			}
		}
	}
}