#include <string>
#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
	std::ifstream ifs;//ifs 라는 ifstream 객체를 생성합니다.
	std::string origin;//이 단어
	std::string replace;//이걸로 대체 
	char c;
	int	idx = 0;//초기화

	if (argc != 4)//명령어 4개가 다 안들어오면 나올 오류
	{
		std::cout << "error!" << std::endl;
		return 0;
	}

	std::string file_name(argv[1]);//첫번째로 받는거: 파일이름
	std::string s1(argv[2]);//두번째로 받는거 바꿀거
	std::string s2(argv[3]);//세번쨰로 받는거 바꿀내용

	ifs.open(file_name);//파일이름 받아서 열기

	if(ifs.fail())//파일 안열렸을때 오류값
	{
		std::cout << "error file not open!" << std::endl;
		return 0;
	}

	//std::cout << file_name << s1 << s2 << std::endl;//파일이름, 변경 내용, 변경할 내용
	std::ofstream ofs(file_name + ".replace");//파일 만들고 .replace 이름 붙이기 

	if(ofs.fail())
	{
		std::cout << "error ofs file not open!" << std::endl;
		return 0;
	}

	while (ifs.get(c))//한줄씩 확인 하면서
		origin += c;
	while (origin.find(s1, idx) != std::string::npos)//s1 을 찾는다 idx 위치부터??
	{
		replace += origin.substr(idx, origin.find(s1, idx) - idx);//idx 부터 찾은애 까지 넣는다.
		replace += s2; 
		idx = origin.find(s1, idx) + s1.length();
	}
	replace += origin.substr(idx, origin.find(s1, idx));//b 다음부터 끝까지 다나옴 왜냐 s1 없는게 -1
	std::cout << replace << std::endl;
	ofs << replace;

	ifs.close();
	ofs.close();
}
