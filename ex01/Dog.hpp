#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(const Dog& src);
		Dog(Dog& src);
		~Dog();
		Dog&	operator=(const Dog& rhs);
		void	makeSound(void) const;
		std::string	getIdea(int idx) const;
		void	setIdea(std::string str, int idx);

	private:
		Brain			*_brain;
};

#endif