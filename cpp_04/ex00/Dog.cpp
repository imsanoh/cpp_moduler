#include "Dog.hpp"

Dog::Dog()
{
}

Dog::Dog(const Dog &ref)
{
	
}

Dog::~Dog()
{
}

Dog& Dog::operator=(const Dog &ref)
{
	return (*this);
}

void	Dog::makeSound()
{
	std::cout << "멍멍" << std::endl;	
}