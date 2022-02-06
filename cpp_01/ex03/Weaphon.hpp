#ifndef WEAPHON_HPP
# define WEAPHON_HPP

# include <iostream>
# include <string>

class Weaphon
{
	private:
		std::string type;
	public:
		Weaphon(std::string type);
		const std::string &getType();
		void setType(std::string type);
		~Weaphon();
};

#endif