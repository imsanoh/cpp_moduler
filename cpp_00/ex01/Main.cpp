#include "PhoneBook.hpp"

int main()
{
    PhoneBook       PhoneBook;
    std::string     cmd;

    std::count <<"나의 폰북에 온것을 환영한다 낯선이여" << std::endl;
    while (cmd.compare ("EXIT"))
    {
        std::cout << "명령어를 입력하십시오" << std::endl;
        std::getline(std::cin, cmd)
    }
}
