#include "Brain.hpp"

Brain::Brain()
{
	this->_ideas[1] = "Dummy idea!";
	std::cout << "Default Brain constructor!" << std::endl;
}

Brain::Brain(const Brain& src)
{
    *this = src;
	std::cout << "Brain Copy constructor!" << std::endl;
}

Brain::Brain(Brain& src)
{
    *this = src;
	std::cout << "Brain Copy constructor!" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called!" << std::endl;
}

Brain&				Brain::operator=(const Brain& rhs)
{
	if (this != &rhs)
    {
        for (int i = 0; i < 100; i++)
		    this->_ideas[i] = rhs._ideas[i];
	}
    std::cout << "Brain Assignation operator called!" << std::endl;
	return *this;
}

std::string	Brain::getIdea(int idx) const
{
    return this->_ideas[idx];
}

void	Brain::setIdea(std::string str, int idx)
{
    this->_ideas[idx] = str;
}