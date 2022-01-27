#include "PhoneBook.hpp"

int main()
{
    PhoneBook       PhoneBook;
    std::string     cmd;

    std::count << "폰북에 온것을 환영합니다." << std::endl;
    while (cmd.compare ("EXIT"))
    {
        std::cout << "명령어를 입력하십시오" << std::endl;
        std::getline(std::cin, cmd);
		if (!cmd.compare("ADD"))
			PhoneBook.add_contant();
		if(!cmd.compare("SEARCH"))
			PhoneBook.search();
    }
}
