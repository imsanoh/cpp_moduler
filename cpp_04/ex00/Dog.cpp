#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
}

// Dog::Dog(const Dog &ref)
// {
	
// }

Dog::~Dog()
{
}

// Dog& Dog::operator=(const Dog &ref)
// {
// 	return (*this);
// }

std::string		Dog::getType(void) const
{
	std::cout <<  "getType member called" << std::endl;
	return this->type;
}

void	Dog::makeSound()
{
	std::cout << "멍멍" << std::endl;	
}