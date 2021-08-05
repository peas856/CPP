#include "Zombie.hpp"

int main()
{
    Zombie      *z2;

    Zombie z1 = Zombie("first zombie");
    z1.announce();
    z2 = newZombie("zomibe by newzombie func");
    z2->announce();
    delete z2;
    randomChump("zombie by randchump");
    return (0);
}