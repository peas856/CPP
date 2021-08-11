#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

#include "AMateria.hpp"
class AMateria;

# include <iostream>
# include <string>

class ICharacter {

	public:
		ICharacter();
		ICharacter(ICharacter const& src);
		virtual ~ICharacter();
		ICharacter& operator=(ICharacter const& rhs);
		virtual std::string const& getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;

	protected:
		std::string	_name;
		AMateria	*_inventory[4];
		int			n_material;
		AMateria	*_spare[10];
		int			n_spare;
};

#endif