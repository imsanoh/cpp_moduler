#include "PhoneBook.hpp"

Phonebook::Phonebook()
{
}

Phonebook::~Phonebook()
{
}

void	PhoneBook::add()
{
	this->contacts[this->reset].set_information();
	if (count < 8)
		count++;
	reset++;
	if (reset == 8)
		reset = 0;
}

void	PhoneBook::show()
{
	std::cout << " something" << std::endl;
	for (unsigned int i = 0; i < this->count; i++)
	{
		std::cout << "|" << std::setw(10) << i + 1 << "|";
		if (this->contacts[i].get_FirstName().length() > 9)
			std::cout << this->contacts[i].get_FirstName().substr(0, 9) << ".|"
		else
			std::cout << std::setw(10) << this->contacts[i].get_FirstName() << "|";

		if (this->contacts[i].get_LastName().length() > 9)
			std::cout << this->contacts[i].get_LastName().substr(0, 9) << ".|"
		else
			std::cout << std::setw(10) << this->contacts[i].get_LastName() << "|"

		if (this->contacts[i].get_NickName().length() > 9)
			std::cout << this->contacts[i].get_NickName().substr(0, 9) << ".|"
		else
			std::cout << std::setw(10) << this->contacts[i].get_NickName() << "|"

		if (this->contacts[i].get_PhoneNumber().length() > 9)
			std::cout << this->contacts[i].get_PhoneNumber().substr(0, 9) << ".|" << std::endl;
		else
			std::cout << std::setw(10) << this->contacts[i].get_PhoneNumber() << "|" <<std::endl;
	}
}

void	PhoneBook::show_contacts(unsigned int index)
{
	this->contacts[index].show_information();//참조자
}

void	PhoneBook::search()
{
	unsigned int	index;

	if (this->count == 0)
		std::cout << "PhoneBook is Empty" << std::endl;
	else
	{
		this->show();
		while (true)
		{
			std::cout << "Enter an index of searching contact or 0 to exit" << std::endl;
			if ((std::cin >> index) && (index == 0 || index - 1 < this->count))
			{
				if (index - 1 < this->count)
				{
					this->show_contacts(index - 1);
					//cin.ignore->cin.ignore();는 버퍼 전체를 비우는것이 아니라 맨 앞의 문자하나를 지운다. getline(읽어올 입력스트림, 저장할 문자열변수)
					std::cin.ignore(100000000000, '\n');//getline
					break ;
				}
				else
				{
					std::cin.clear();//??
					std::cin.ignore(100000000000, '\n');//무시하는길이
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
