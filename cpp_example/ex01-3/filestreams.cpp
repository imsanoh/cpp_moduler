#include <iostream>
#include <fstream>

int main()
{
	std::ifstream	ifs("numbers");//읽을거니까 뒤에 문자열을 줌
	//예외처리
	unsigned int	dst;
	unsigned int	dst2;
	ifs >> dst >> dst2; //띄어쓰기 or 개행 

	std::cout << dst << " " << dst2 << std::endl;
	ifs.close();

	std::ofstream ofs("numbers.replace");
	ofs << "i like penies a whole damn lot" << std::endl;
	ofs.close();
}

//s1 abc working abc ->cdf
//cdf ->ofs 저장소 
//대체 되는 파일을 replace
//replace => 만들어야힘


//ifstram 이랑 ofstream 이랑 뭔지 알아야함
//ifstream : 파일 읽기 함수 -> 결국 키보드로 가져오는것이 아닌 파일로 가져옴
//ofstream : 파일에 쓰기 함수 -> 키보드가 아닌 파일로 쓴다.