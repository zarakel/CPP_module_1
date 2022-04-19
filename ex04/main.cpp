#include <fstream>
#include <iostream>

int	main(int ac, char **av)
{
	if (ac == 4)
	{
		std::string filename( av[1] );
		filename += ".replace";
		std::ifstream file( av[1] );
		std::ofstream fichier( filename );
		std::string str1( av[2] );
		std::string str2( av[3] );
		std::string str;
		int	i;
		char	c;

		while ( file.get(c) )
			str += c;
		std::cout << str;
		i = str.find(str1);
		while (i != -1)
		{
			str.erase( i, str1.size());
			str.insert( i, str2 );
			i = str.find(str1);
		}
		std::cout << str;
		fichier << str;
	}
	else
	std::cout << "I'm disappointed" << std::endl;
}
