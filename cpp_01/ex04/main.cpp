#include <string>
#include <iostream>
#include <fstream>

void	write_line(bool &first, std::ofstream &write_file, std::string line, std::string replace)
{
	if(first)
	{
		write_file << line <<replace;
		first = false;
	}
	else
	{
		write_file << std::endl << line <<replace;
	}
}
//replace 대체하기 
void want_replace(std::ifstream &read_file, std::ofstream &write_file, char **argv)
{
	std::string find(argv[2]);
	std::string replace(argv[3]);
	std::string line;
	bool		first = true;

	while (std::getline(read_file, line))
	{
		size_t nPos = line.find(find);

		if(nPos == std::string::npos)
		{
			write_line(first, write_file, line, "");
		}
		else
		{
			write_line(first, write_file, line.substr(0, nPos), replace);

			std::string new_line = line.substr(nPos + find.length());
			nPos = new_line.find(find);
			while (nPos != std::string::npos)
			{
				write_file << new_line.substr(0, nPos) << replace;
				new_line = new_line.substr(nPos + find.length());
				nPos = new_line.find(find);
			}
			write_file << new_line;
		}
	}
}

int main(int argc, char **argv)
{
	std::ifstream ifs;
	std::string str;

	if (argc != 4)
	{
		std::cout << "error!" << std::endl;
		return 0;
	}

	std::string file_name(argv[1]);//첫번째로 받는거: 파일이름
	std::string s1(argv[2]);//두번째로 받는거 바꿀거
	std::string s2(argv[3]);//세번쨰로 받는거 내용

	ifs.open(file_name);//파일이름 받아서 열기

	if(ifs.fail())//파일 안열렸을때 오류값
	{
		std::cout << "error file not open!" << std::endl;
		return 0;
	}

	std::cout << file_name << s1 << s2 << std::endl;//파일이름, 변경 내용, 변경할 내용
	std::ofstream ofs(file_name + ".replace");//파일 만들고 .replace 이름 붙이기 

	while(!ifs.eof())//한줄씩 확인 하면서
	{
		std::getline(ifs, str);//겟라인으로 받아옴
		want_replace(&ifs, &ofs, ??);//replace 대체 함수
		ofs << str << std::endl;
	}
	ifs.close();
	ofs.close();
}
