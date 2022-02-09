#include <string>
#include <iostream>
#include <fstream>

replaces

int main()
{
	//문자열 = s1;
	//문자열2 = s2;

	std::ifstream ifs("file");
	std::string	s1;
	std::string	s2;
	ifs >> s1 >> s2;

	std::cout << s1 << " " << s2 << std::endl;
	ifs.close();

	std::ofstream ofs("file.replace");
	ofs << "somethig" << std::endl;
	ofs.close();
}

//대체 해주는 함수를 하나 만들자!

// int main()
// {
// 	std::ifstream ifs("somethings")

// 	std::string s1;
// 	std::string s2;

// 	std::ofstream ofs("somethings.replace")
// 	ofs.close();  

// }

//./program
//s1 -> s2;
//프로그램돌아가면 
// 내장함수를 이용해서 replace 같은 친구를 사용하는거임

//ifstream?

//파일은 존재 해야 하고
//그 안에 있는 인자를 바꾸는 프로그램 만드는거 임