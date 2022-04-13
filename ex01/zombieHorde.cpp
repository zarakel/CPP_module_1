#include "Zombie.hpp"

Zombie	*Zombie::zombieHorde( int N, std::string name )
{
	Zombie	*horde = new Zombie [N];
	int	i;
	int	horde_end;

	i = 0;
	horde_end = N;
	while (i != horde_end)
	{
		horde[i]._name = name;
		i++;
	}
	return (horde);
}
