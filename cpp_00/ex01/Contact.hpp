#ifndef CONTACT_CPP
# define CONTACT_CPP

# include <iostream>
# include <string>

class Contact
{
	private:
	std::string	FirstName;
	std::string	LastName;
	std::string	NickName;
	std::string	PhoneNumber;
	std::string	DarkestSecreat;

	public:

	Contact();
	~Contact();

    void Contact::set_serise();

	void set_FirstName(const std::string str);
	void set_LastName(const std::string str);
	void set_NickName(const std::string str);
	void set_DarkestSecreat(std::string str);
	void set_PhoneNumber(std::string str);

	std::string get_FirstName();
	std::string get_LastName();
	std::string get_NickName();
	std::string get_PhoneNumber();
	std::string get_DarkestSecreat();
};

#endif
