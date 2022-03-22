#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{
private:

	std::string FirstName;
	std::string LastName;
	std::string NickName;
	std::string PhoneNumber;
	std::string DarkestSecret;

public:
	Contact();//생성자
	~Contact();//소멸자

	void	set_information();
	void	show_infromation();

	void set_FirstName(const std::string str);//인자에 실제 값을 넣어주기 위해 존재 합니다.
	void set_LastName(const std::string str);
	void set_NickName(const std::string str);
	void set_PhoneNumber(const std::string str);
	void set_DarkestSecret(const std::string str);

	std::string get_FirstName();//설정된 인자의 값을 가져옵니다.
	std::string get_LastName();
	std::string get_NickName();
	std::string get_PhoneNumber();
	std::string get_DarkestSecreat();
};

#endif

//get && set?
