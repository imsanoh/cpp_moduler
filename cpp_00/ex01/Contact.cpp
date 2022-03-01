#include "Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}
//getline? ->
void Contact::set_serise()
{
	std::cout << "Enter First Name" << std::endl;
	std::getline(std::cin, this->FirstName);
	std::cout << "Enter Last Name" << std::endl;
	std::getline(std::cin, this->LastName);
	std::cout << "Enter Nick Name" << std::endl;
	std::getline(std::cin, this->NickName);
	std::cout << "Enter Number" << std::endl;
	std::getline(std::cin, this->PhoneNumber);
	std::cout << "Enter The Darkest Secret!" << std::endl;
	std::getline(std::cin, this->DarkestSecret);
}

void	Contact::show_information()
{
	std::cout << "First name: " << this->FirstName << std::endl;
	std::cout << "Last name: " << this->LastName << std::endl;
	std::cout << "Nick name: " << this->NickName << std::endl;
	std::cout << "Numaber: " << this->PhoneNumber << std::endl;
	std::cout << "The Darkest Secret: " << this->DarkestSecret << std::endl;
}
//this? -> this는 객체 자신의 주소값입니다
std::string	Contact::get_FirstName()
{
	return (this->FirstName);//this 사용
}

std::string Contact::get_LastName()
{
	return (this->LastName);//this 사용
}

std::string	Contact::get_NickName()
{
	return (this->NickName);//this 사용
}

std::string Contact::get_PhoneNumber()
{
	return (this->PhoneNumber);//this 사용
}
