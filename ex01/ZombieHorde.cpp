
#include "Zombie.hpp"

Zombie* zombieHorde(int n, std::string name)
{
    int i;
    Zombie *z;

    i = 0;
    z = new Zombie[n];
	while (i < n)
		z[i++].add_name(name);
	return (z);
}