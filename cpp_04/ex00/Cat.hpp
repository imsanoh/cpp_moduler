#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat(/* args*/);
		//Cat(const Cat &ref);
		~Cat();
		Cat& operator=(const Cat &ref);

		std::string getType(void) const;
		void setType(int const raw);

		virtual void makeSound();
};

#endif