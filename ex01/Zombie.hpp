#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
private:
	std::string	name;
public:
	Zombie();
	Zombie(std::string const name);
    ~Zombie();
	void announce(void);
	void add_name(std::string name);
};

Zombie* zombieHorde(int n, std::string name);



#endif