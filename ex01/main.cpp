#include "Zombie.hpp"

int main()
{
    int i;
    Zombie	*zombie;

    i = 0;
	zombie = zombieHorde(8, "Horde");
    while (i < 8)
        zombie[i++].announce();
	delete [] zombie;
	return (0);
}