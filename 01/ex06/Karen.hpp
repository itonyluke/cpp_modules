#ifndef KAREN_HPP
# define KAREN_HPP

# include <iostream>
# include <string>

class Karen
{
private:
	typedef void (Karen::*functions)(void);
	functions methods[4];
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
public:
	Karen(void);
	~Karen(void);
	void complain( std::string level );
	void filter( std::string level );
};
#endif
