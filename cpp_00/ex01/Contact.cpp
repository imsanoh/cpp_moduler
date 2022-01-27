#include "Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

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
	std::getline(std::cin, this->DarkestSecreat);
}

std::string	Contact::get_FirstName()
{
	return (this->FirstName);
}

std::string Contact::get_LastName()
{
	return (this->LastName);
}

std::string	Contact::get_NickName()
{
	return (this->NickName);
}

std::string Contact::get_PhoneNumber()
{
	return (this->PhoneNumber);
}

std::string Contact::get_DarkestSecreat()
{
	return (this->DarkestSecreat);
}