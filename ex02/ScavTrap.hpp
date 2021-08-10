#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	public:
		ScavTrap();
        ScavTrap(std::string str);
		ScavTrap(ScavTrap const & src);
		~ScavTrap();
		ScavTrap&   operator=(const ScavTrap& obj);

		void		attack(std::string const & target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);

		void			guardGate(void);
};

#endif