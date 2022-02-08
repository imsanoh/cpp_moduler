#include <iostream>
#include <fstream>

int main()
{
	std::ifstream	ifs("numbers");
	unsigned int	dst;
	unsigned int	dst2;
	ifs >> dst >> dst2;

	std::cout << dst << " " << dst2 << std::endl;
	ifs.close();

	std::ofstream ofs("test.out");
	ofs << "i like penies a whole damn lot" << std::endl;
	ofs.close();
}


//ifstram 이랑 ofstream 이랑 뭔지 알아야함