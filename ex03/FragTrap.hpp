#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
	public:
		FragTrap();
        FragTrap(std::string str);
		FragTrap(FragTrap const & src);
		~FragTrap();
		FragTrap&   operator=(const FragTrap& obj);

		void		attack(std::string const & target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);

		void			highFivesGuys(void);
};

#endif