#include <string>
#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
	std::ifstream ifs;
	std::string str;

	if (argc != 4)
	{
		std::cout << "error!" << std::endl;
		return 0;
	}
	std::string file_name(argv[1]);
	std::string s1(argv[2]);
	std::string s2(argv[3]);

	ifs.open(file_name);

	if(ifs.fail())
	{
		std::cout << "error file not open!" << std::endl;
		return 0;
	}

	std::cout << file_name << s1 << s2 << std::endl;
	std::ofstream ofs(file_name + ".replace");

	while(!ifs.eof())
	{
		std::getline(ifs, str);
		ofs << str << std::endl;
	}
	
	ifs.close();
	ofs.close();
}

// std::ifstream ifs;

// ifs.open(file_name);
// if (n == 4)
// {

// }
// else
// {

// }

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