#include <string>
#include <iomanip>
#include "Harl.hpp"

Harl::Harl( void )
{
	return;
}

Harl::~Harl( void )
{
	return;
}

void	Harl::complain(std::string level)
{
	void (Harl::*tabf[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string tab[] ={"debug", "info","warning", "error"};
	for (int i = 0; i < 4; i++)
	{
		if (level == tab[i])
		{
			while(i < 4)
			{
				(this->*tabf[i])();
				i++;
			}
		}
	}
}

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "fonction debug" << std::endl;
	std::cout << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "fonction info" << std::endl;
	std::cout << std::endl;

}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "fonction warning" << std::endl;
	std::cout << std::endl;

}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "fonction error" << std::endl;
	std::cout << std::endl;
}
