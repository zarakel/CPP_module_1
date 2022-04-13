#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie( void )
{
	return;
}

Zombie::~Zombie( void )
{
	return;
}

void	Zombie::announce( void )
{
	int		N;
	int		i;
	std::string	str;

	i = 0;
	N = 5;
	str = "Bernardo";
	Zombie *hoe = Zombie::zombieHorde( N, str );

	while (i != N)
	{
		std::cout << hoe[i]._name << " : BraiiiiiiinnnzzzZ..." << std::endl;
		i++;
	}
	delete [] hoe;
	return;
}
