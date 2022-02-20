// # include "Karen.hpp"

// using namespace std;
# include <iostream>

int main()
{
	// Karen kaern = Karen();
	int a = 9;
	int* a_ptr;

	a_ptr = &a;
	std::cout << a_ptr << std::endl;
	std::cout << *a_ptr << std::endl;
	(Karen::*func)(void);
	return 0;
}

