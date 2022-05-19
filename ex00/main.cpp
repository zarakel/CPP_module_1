#include "Zombie.hpp"
#include <iostream>

int	main()
{
	Zombie zombie;
	zombie.randomChump("Bernardo");
	zombie.announce();

	while( 1 );
	return 0;
}
