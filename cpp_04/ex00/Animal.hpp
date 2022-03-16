#ifndef ANIMAL_HPP
# define ANIMAL_HPP

class Animal
{
	protected:
		std::stirng type;
	public:
		Animal();
		Animal(const Animal &ref);
		~Animal();
		Animal& operator=(const Animal &ref);

		void	makeSound();
};

#endif