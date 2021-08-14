# include "checkType.hpp"
# include <exception>

int main(int ac, char *av[]) {
	ABase* type = NULL;

	if (ac != 2)
		std::cout << "Error: invalid argument" << std::endl;
	else
	{
		if (!(type = getType(av[1])))
		{
			std::cout << "Error: invalid argument" << std::endl;
			return (0);
		}
		printTypes(type, av[1]);
		delete type;
	}
	return 0;
}