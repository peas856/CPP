#include "Karen.hpp"

int	main(int ac, char **av)
{
	Karen	k;

	if (ac != 2)
		std::cout << "Invalid ARG, enter level as text" <<std::endl;
	else
		k.complain(av[1]);
	return (0);
}