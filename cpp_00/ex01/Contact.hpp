#ifndef CONTACT_CPP
# define CONTACT_CPP

# include <iostream>
# include <string>

class Contact
{
	private:
	std::string	FirstName;
	std::string	LastName;
	std::string	NickkName;
	std::string	PhoneNumber;
	std::string	DarkestSecreat;

	public:

	Contact();
	~Contact();

	void set_FirstName(const std::string str);
	void set_LastName(const std::string str);
	void set_NickName(const std::string str);
	void set_DarkestSecreat(std::string str);
	void set_PhoneNumber(std::string str);

	std::string get_FirstName(void) const;
	std::string get_LastName(void) const;
	std::string get_NickName(void) const;
	std::string get_Number(void) const;
	std::string get_DarkestSecreatt(void) const;
};
#endif
