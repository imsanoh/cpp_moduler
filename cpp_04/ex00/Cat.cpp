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