<<<<<<< HEAD
#include "Karen.hpp"

int main(void)
{
	Karen karen;

	karen.complain("DEBUG");
	karen.complain("INFO");
	karen.complain("WARNING");
	karen.complain("ERROR");
=======
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
>>>>>>> b8ab7de551d19187c23c5e77660a4e8c43107442
}
