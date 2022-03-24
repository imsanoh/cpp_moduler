#include "Contact.hpp"

Contact::Contact()
{
}
Contact::~Contact()
{
}
//getline? -> 함수는 입력 스트림에서 문자들을 읽어서, 인자로 받은 문자열에 저장합니다.
void	Contact::set_information()
{
	std::string tmp;
	std::cout << "Enter First Name" << std::endl;
	std::getline(std::cin, this->FirstName);//cin 으로 받아서 this 에 저장 다시 그걸 FirstName 에 저장 합니다.
	//FirstName = tmp;
	std::cout << FirstName << std::endl;
	std::cout << "Enter Last Name" <<std::endl;
	std::getline(std::cin, tmp);
	LastName = tmp;
	std::cout << LastName << std::endl;
	std::cout << "Enter Nickki Name" << std::endl;
	std::getline(std::cin, tmp);
	NickName = tmp;
	std::cout << "Enter PhoneNumber" << std::endl;
	std::getline(std::cin, tmp);
	PhoneNumber = tmp;
	std::cout << "Enter DarkestSecret" << std::endl;
	std::getline(std::cin, tmp);
	DarkestSecret = tmp;
}

void	Contact::show_information()
{
	std::cout << "First name : " << this->FirstName << std::endl;//this->F~ -> 자기 자신의 주소값을 넣어주는겁니다.
	std::cout << "Last name : " << this->LastName << std::endl;
	std::cout << "Nick name : " << this->NickName << std::endl;
	std::cout << "DarkestSecret : " << this->DarkestSecret << std::endl;
	std::cout << "PhoneNumber : " << this->PhoneNumber << std::endl;
}
//this? -> this는 객체 자신의 주소값입니다
std::string	Contact::get_FirstName()
{
	return (this->FirstName);//this 사용
}

std::string Contact::get_LastName()
{
	return (this->LastName);//this 사용
}

std::string	Contact::get_NickName()
{
	return (this->NickName);//this 사용
}

std::string Contact::get_PhoneNumber()
{
	return (this->PhoneNumber);//this 사용
}
