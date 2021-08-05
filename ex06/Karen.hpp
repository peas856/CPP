#ifndef KAREN_HPP
# define KAREN_HPP

# include <iostream>
# include <string>

class Karen
{
	private:
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);

	public:
	Karen();
	~Karen();
	void	(Karen::*funcs[4])(void);
	void	complain(std::string level);
};

#endif