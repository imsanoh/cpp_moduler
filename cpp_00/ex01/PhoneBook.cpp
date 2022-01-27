#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
}

PhoneBook::~PhoneBook()
{
}

void	PhoneBook::add()
{
	this->contacts[this->reset].set_serise();
	if (count < 8)
		count++;
	reset++;
	if (reset == 8)
		reset = 0;
}

void	PhoneBook::show()
{
	std::cout << "|     Index|First name| Last name|  Nickname|    Number|" << std::endl;// 가장 처음에 나와야 하는거=
	for (unsigned int i = 0; i < this->count; i++)
	{
		std::cout << "|" << std::setw(10) << i + 1<< "|";
		if (this->contacts[i].get_FirstName().length() > 9)
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
			std::cout << std::setw(10) << this->contacts[i].get_PhoneNumber() << "|" << std::endl;
	}
}