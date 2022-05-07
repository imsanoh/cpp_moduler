#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "Contact.hpp"

class Phonebook
{
private:
	Contact contacts[8]; //여기에 선언하는 이유는 컨택트를 가져와야 하기 때문 컨텍트에 8개를 넣겠다
	unsigned int	count;
	unsigned int	reset;
public:
	Phonebook();
	~Phonebook();
	void	add();
	void	search();
	void	show();
	void	show_contacts(unsigned int index);
};

#endif
