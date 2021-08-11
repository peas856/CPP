#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
	public:
		Animal();
		Animal(const Animal& src);
		Animal(Animal& src);
		virtual ~Animal();
		Animal&	operator=(const Animal& rhs);
		virtual void	makeSound(void) const = 0;
		std::string		getType(void) const;
		virtual std::string	getIdea(int idx) const = 0;

	protected:
		std::string	_type;
};

#endif