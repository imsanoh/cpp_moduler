#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{
private:

	std::string FisrtName;
	std::string LastName;
	std::string NickName;
	std::string PhoneNumber;
	std::string DarkestSecret;

public:

	Contact();
	~Contact();

	void set_FirstName(const std::string str);
	void set_LastName(const std::string str);
	void set_NickName(const std::string str);
	void set_PhoneNumber(const std::string str);
	void set_DarkestSecret(const std::string str);

	std::string get_FistrName();
	std::string get_LastName();
	std::string get_NickName();
	std::string get_PhoneNumber();
};

#endif
