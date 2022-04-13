#include "Zombie.hpp"
#include <iostream>

Zombie	*Zombie::newZombie( std::string name )
{
	Zombie *Paolo = new Zombie;

	Paolo->_name = name;
	return (Paolo);
}
