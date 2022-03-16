#ifndef DOG_HPP
# define DOG_HPP

class Dog : public Animal 
{
	public 
		Dog();
		Dog(const Dog &ref);
		~Dog();
		Dog& operator=(const Dog &ref);
};

#endif