#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
}

// Cat::Cat(const Cat &ref)
// {
// 	*this = ref;
// }

Cat::~Cat()
{
}

// Cat& Cat::operator=(const Cat &ref)
// {
// 	return (*this);
// }

std::string		Cat::getType(void) const
{
	std::cout <<  "getType member called" << std::endl;
	return this->type;
}

void	Cat::makeSound()
{
	std::cout << "야옹" << std::endl;	
}

