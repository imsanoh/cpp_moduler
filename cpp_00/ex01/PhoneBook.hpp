#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook
{
private:
	Contact	contacts[8];//여기에 선언하는 이유는 컨택트를 가져와야 하기 때문
	unsigned int	count;
	unsigned int	reset;
public:
	PhoneBook();
	~PhoneBook();
	void	add();
	void	search();
	void	show();
	void	show_contacts(unsigned int index);
};

#endif
