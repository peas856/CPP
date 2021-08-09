#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {
	
	public:
		Fixed(void);
		Fixed(const Fixed& obj);
		~Fixed(void);
	
		Fixed&  operator=(const Fixed &obj);
		int     getRawBits(void) const;
		void    setRawBits(int const raw);

	private:
		int					_fixed;
		const static int	_bits = 8;
		
};

#endif