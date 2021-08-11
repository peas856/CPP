#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal
{
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal& src);
		WrongAnimal(WrongAnimal& src);
		virtual ~WrongAnimal();
		WrongAnimal&	operator=(const WrongAnimal& rhs);
		void	makeSound(void) const;
		std::string		getType(void) const;

	protected:
		std::string	_type;
};

#endif