#include "Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

void	Contact::set_information()
{
	std::cout << "Enter First Name" << std::endl;
	std::getline(std::cin, this->FirstName);
	std::cout << "Enter Last Name" <<std::endl;
	std::getline(std::cin, this->LastName);
	std::cout << "Enter Nick Name" << std::endl;
	std::getline(std::cin, this->NickName);
	std::cout << "Enter PhoneNumber" << std::endl;
	std::getline(std::cin, this->PhoneNumber);
	std::cout << "Enter DarkestSecret" << std::endl;
	std::getline(std::cin, this->DarkestSecret);
}

void	Contact::show_information()
{
	std::cout << "First name: " << this->FirstName << std::endl;
}
