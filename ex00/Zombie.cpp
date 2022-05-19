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
	Zombie *Paolo = Zombie::newZombie( "Paolo" ); 
	std::cout << Paolo->_name << " : BraiiiiiiinnnzzzZ..." << std::endl;
	delete Paolo;
	return;
}
