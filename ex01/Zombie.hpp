#ifndef ZOMBIE_H
# define ZOMBIE_H
# include <string>

class	Zombie
{
	public :
	void	announce( void );
	Zombie	*zombieHorde( int N, std::string name );

	Zombie( void );
	~Zombie( void );

	private :
	std::string _name;
};

#endif
