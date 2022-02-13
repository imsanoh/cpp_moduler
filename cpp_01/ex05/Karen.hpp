#ifndef KAREN_HPP
# define KAREN_HPP

# include <iostream>

# define DEBUG 1
# define INFO 2
# define WARNING 3
# define ERROR 4

class Karen
{
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
	public:
		Karen(void);
		~Karen();
		void complain(std::string);
}

#endif