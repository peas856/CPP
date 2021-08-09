#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {
	
	public:
		Fixed(void);
		Fixed(const int num);
		Fixed(const float num);
		Fixed(const Fixed& obj);
		~Fixed(void);
	
		Fixed&  operator=(const Fixed &obj);
		int     getRawBits(void) const;
		void    setRawBits(int const raw);
		int			toInt(void) const;
		float		toFloat(void) const;

	private:
		int					_fixed;
		const static int	_bits = 8;
		
};

std::ostream&	operator<< (std::ostream &stream, const Fixed &fixed);

#endif