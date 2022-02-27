#ifndef KAREN_HPP
# define KAREN_HPP

<<<<<<< HEAD
# include <iostream>
# include <string>

class Karen
{
private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
	std::string str[4];
	void (Karen::*complain_level[4])(void);
public:
	Karen();
	~Karen();
	void complain(std::string level);
=======
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
>>>>>>> b8ab7de551d19187c23c5e77660a4e8c43107442
};

#endif
