#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include <iostream>
# include <string>

class MateriaSource : public IMateriaSource {

	public:
		MateriaSource();
		MateriaSource(MateriaSource const& src);
		~MateriaSource();
		MateriaSource& operator=(MateriaSource const& rhs);
		void learnMateria(AMateria* m);
		AMateria* createMateria(std::string const& type);
};

#endif