#include <iostream>
#include <string>

int main()
{
	std::string str;
	std::cin >> str;

	for(int i=0; i<str.length(); i++)
	{
		if(str[i]>='a' && str[i]<='z')
			str[i] = toupper(str[i]);
	}
	std::cout << str << std::endl;
}
