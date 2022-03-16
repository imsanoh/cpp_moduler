#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		//Animal(const Animal &ref);
		virtual ~Animal();
		Animal& operator=(const Animal &ref);

		std::string getType(void) const;
		void setType(int const raw);

		virtual void	makeSound();
};

#endif