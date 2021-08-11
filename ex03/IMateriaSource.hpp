#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include "AMateria.hpp"
# include <iostream>
# include <string>

class IMateriaSource {

	public:
		IMateriaSource();
		IMateriaSource(IMateriaSource const& src);
		virtual ~IMateriaSource();
		IMateriaSource& operator=(IMateriaSource const& rhs);
		virtual void learnMateria(AMateria* m) = 0;
		virtual AMateria* createMateria(std::string const& type) = 0;

	protected:
		AMateria	*_material[4];
		int			n_material;
};

#endif