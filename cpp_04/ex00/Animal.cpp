#include "Animal.hpp"

Animal::Animal()
{
	type = "Animal";
}

// Animal::Animal(const Animal &ref)
// {
// 	*this = ref;
// }

 Animal::~Animal()
 {
 }

//  Animal& Animal::operator=(const Animal &ref)
//  {
//  	return (*this);
//  }

std::string		Animal::getType(void) const
{
	std::cout << "getType member called" << std::endl;
	return this->type;
}

void	Animal::makeSound()
{
	std::cout << "animal sound" << std::endl;	
}