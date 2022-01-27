#ifndef CONTACT_CPP
# define CONTACT_CPP

#include <iostream>
#include <string>
#include <iomanip>

class Contact
{
	private:
	std::string	FirstName;
	std::string	LastName;
	std::string	NickName;
	std::string	PhoneNumber;
	std::string	DarkestSecret;

	public:

	Contact();
	~Contact();

	void Contact::set_serise();
	void Contact::show_information();

	void set_FirstName(const std::string str);
	void set_LastName(const std::string str);
	void set_NickName(const std::string str);
	void set_DarkestSecret(std::string str);
	void set_PhoneNumber(std::string str);

	std::string get_FirstName();
	std::string get_LastName();
	std::string get_NickName();
	std::string get_PhoneNumber();
	std::string get_DarkestSecreat();
};

#endif
