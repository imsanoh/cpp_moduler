#ifndef CAT_HPP
# define CAT_HPP

class Cat : public Animal
{
	public:
		Cat(/* args*/);
		Cat(const Cat &ref);
		~Cat();
		Cat& operator=(const Cat &ref);

		int getType(void) const;
		void setType(int const raw);

		void makeSound();
};

#endif