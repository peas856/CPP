#include "Karen.hpp"

Karen::Karen()
{
	this->funcs[0] = &Karen::debug;
	this->funcs[1] = &Karen::info;
	this->funcs[2] = &Karen::warning;
	this->funcs[3] = &Karen::error;
}

Karen::~Karen()
{
}

void	Karen::debug()
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void	Karen::info()
{
	std::cout << "I cannot believe adding extra bacon cost more money."<< std::endl;
	std::cout << "You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void	Karen::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I’ve been coming here for years and you just started working here last month." << std::endl;
}

void	Karen::error()
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void	Karen::complain(std::string level)
{
	int i;
	int flag;
	std::string	strs[] = {"debug", "info", "warning", "error"};

	i = 0;
	flag = 0;
	while (i < 4)
	{
		if (level == strs[i])
			flag = 1;
		if (flag)
			(this->*funcs[i])();
		i++;
	}
	if (i == 4 && flag == 0){
		std::cout << "only <debug, info, warning, error> level valid" << std::endl;
		return ;
	}
}