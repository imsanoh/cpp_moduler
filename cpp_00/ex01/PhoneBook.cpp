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

void PhoneBook::search()
{
	
}