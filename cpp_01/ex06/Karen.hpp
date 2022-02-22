#ifndef KAREN_HPP
# define KAREN_HPP

#include <iostream>
#include <string>

# define DEBUG 0
# define INFO 1
# define WARNIG 2
# define ERROR 3

typedef struct s_complain
{
	std::string level;
	void (Karen::*func_ptr)(void);
}

class Karen
{
	private:
		void	debug(void);
		void	info(void);
		void	warnig(void);
		void	error(void);
	public:
		Karen(void);
		~Karen(void);
		void complain(std::string level);
};

#endif
