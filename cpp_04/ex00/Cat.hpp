#ifndef CAT_HPP
# define CAT_HPP

class Cat
{
	private:
		std::string type
	public:
		Cat(/* args*/);
		Cat(const Cat &ref);
		~Cat();
		Cat& operator=(const Cat &ref);
};

#endif