#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {

	public:
        DiamondTrap(void);
        DiamondTrap(std::string str);
        DiamondTrap(DiamondTrap const &src);
        ~DiamondTrap(void);
        void	attack(std::string const & target);
        DiamondTrap const & operator=(DiamondTrap const & obj);
        void	whoAmI(void);

	private:
        std::string		_name;	
};

#endif