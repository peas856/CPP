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
	
		Fixed&  		operator=(const Fixed &obj);
		int     		getRawBits(void) const;
		void    		setRawBits(int const raw);
		int				toInt(void) const;
		float			toFloat(void) const;
		bool			operator>(const Fixed  & obj);
		bool			operator>=(const Fixed  & obj);
		bool			operator<(const Fixed  & obj);
		bool			operator<=(const Fixed  & obj);
		bool			operator==(const Fixed  & obj);
		bool			operator!=(const Fixed  & obj);
		Fixed&			operator+(const Fixed  & obj);
		Fixed&			operator-(const Fixed  & obj);
		Fixed&			operator*(const Fixed  & obj);
		Fixed&			operator/(const Fixed  & obj);
		Fixed&			operator++( void );
		Fixed			operator++( int );
		Fixed&			operator--( void );
		Fixed			operator--( int );
		static	Fixed&	min( Fixed& n1, Fixed& n2 );
		static	Fixed&	max( Fixed& n1, Fixed& n2 );
		const static Fixed&	max(Fixed const& n1, Fixed const& n2);
		const static Fixed&	min(Fixed const& n1, Fixed const& n2);

	private:
		int					_fixed;
		const static int	_bits = 8;
		
};

std::ostream &		operator<<(std::ostream &s, const Fixed &fixed);

#endif