#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain
{
	public:
		Brain();
		Brain(const Brain& src);
		Brain(Brain& src);
		~Brain();
		Brain&	operator=(const Brain& rhs);
        std::string	getIdea(int idx) const;
        void    setIdea(std::string str, int idx);

	private:
		std::string		_ideas[100];
};

#endif 