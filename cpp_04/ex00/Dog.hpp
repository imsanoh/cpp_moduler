#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog();
		//Dog(const Dog &ref);
		~Dog();
		Dog& operator=(const Dog &ref);

		std::string getType(void) const;
		void setType(int const raw);

		virtual void	makeSound();
};

#endif