#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(const Cat& src);
		Cat(Cat& src);
		~Cat();
		Cat&	operator=(const Cat& rhs);
		void	makeSound(void) const;
		std::string	getIdea(int idx) const;

	private:
		Brain			*_brain;
};

#endif