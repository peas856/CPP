#include "Zombie.hpp"

void randomChump(std::string name)
{
    Zombie z3 = Zombie(name);
    z3.announce();
}