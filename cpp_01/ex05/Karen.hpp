#ifndef KAREN_HPP
# define KAREN_HPP

class Karen
{
	private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
	public:
		Karen(/* args*/);
		Karen(const Karen &ref);
		~Karen();
		Karen& operator=(const Karen &ref);
};

#endif