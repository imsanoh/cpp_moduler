#include "Cat.hpp"

Cat::Cat()
{
}

Cat::Cat(const Cat &ref)
{
	*this = ref;
}

Cat::~Cat()
{
}

Cat& Cat::operator=(const Cat &ref)
{
	return (*this);
}

void	Cat::makeSound()
{
	std::cout << "	야옹" << std::endl;	
}