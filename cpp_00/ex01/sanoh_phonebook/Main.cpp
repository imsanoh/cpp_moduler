#include "PhoneBook.hpp"
#include "Contact.hpp"

int main()
{
	Phonebook		phonebook;
	std::string		cmd;

	std::cout << "폰북에 온것을 환영합니다." << std::endl;
	while(cmd.compare ("EXIT"))
	{
		std::cout << "명령어를 입력하십시오" << std::endl;
		std::getline(std::cin, cmd);//getline?
		if (!cmd.compare("ADD"))
			phonebook.add();
		if(!cmd.compare("SEARCH"))
		{
			phonebook.search();
			phonebook.show();
		}
		if(!cmd.compare("EXIT"))
			break;
		else
			std::cout << "명령어 없음" << std::endl;
	}
}
