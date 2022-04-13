#include "Zombie.hpp"
#include <iostream>

void	Zombie::randomChump( std::string name )
{
	Zombie Bernardo;
	this->_name = name;
	std::cout << this->_name << " : BraiiiiiiinnnzzzZ..." << std::endl;
	return;
}
