#include "Animal.hpp"

Animal::Animal()
{
}

Animal::Animal(const Animal &ref)
{
	*this = ref;
}

Animal::~Animal()
{
}

Animal& Animal::operator=(const Animal &ref)
{
	return (*this);
}

void	Animal::makeSound()
{
	std::cout << "animal sound" << std::endl;	
}