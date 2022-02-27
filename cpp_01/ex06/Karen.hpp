#ifndef KAREN_HPP
# define KAREN_HPP

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
};

#endif
