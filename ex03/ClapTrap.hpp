#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
	public:
		ClapTrap();
		ClapTrap(std::string str);
		ClapTrap(const ClapTrap& src);
		ClapTrap(ClapTrap& src);
		~ClapTrap();
		ClapTrap&	operator=(const ClapTrap& obj);

		void		attack(std::string const & target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);

	protected:
		std::string	name;
		int			hitPoints;
		int			energyPoints;
		int			attackDamage;
		int			default_hp;
};

#endif