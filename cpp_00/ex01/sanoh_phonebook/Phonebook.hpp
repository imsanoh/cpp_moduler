#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "Contact.hpp"

class Phonebook
{
private:
	Contact contacts[8];
	unsigned int	count;
	unsigned int	reset;
public:
	Phonebook();
	~Phonebook();
};
