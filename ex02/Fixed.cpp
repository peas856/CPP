#include "Fixed.hpp"

Fixed::Fixed(void){
	_fixed = 0;
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& obj) {
	// std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

Fixed::~Fixed(void) {
	// std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int num) {
	_fixed = num << _bits;
	// std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float num){
	_fixed = roundf(num * (1 << _bits));
	// std::cout << "Float constructor called" << std::endl;
}

bool	Fixed::operator>(const Fixed  & obj )
{
	if (this->_fixed > obj._fixed)
		return (true);
	return (false);
}

bool	Fixed::operator>=(const Fixed  & obj )
{
	if (this->_fixed >= obj._fixed)
		return (true);
	return (false);
}

bool	Fixed::operator<(const Fixed  & obj )
{
	if (this->_fixed < obj._fixed)
		return (true);
	return (false);
}

bool	Fixed::operator<=(const Fixed  & obj )
{
	if (this->_fixed <= obj._fixed)
		return (true);
	return (false);
}

bool	Fixed::operator==(const Fixed  & obj )
{
	if (this->_fixed == obj._fixed)
		return (true);
	return (false);
}

bool	Fixed::operator!=(const Fixed  & obj )
{
	if (this->_fixed != obj._fixed)
		return (true);
	return (false);
}

Fixed&	Fixed::operator+(const Fixed  & obj )
{
	_fixed += obj._fixed;
	return (*this);
}

Fixed&	Fixed::operator-(const Fixed  & obj )
{
	_fixed -= obj._fixed;
	return (*this);
}

Fixed&				Fixed::operator*(const Fixed  & obj )
{
	_fixed *= obj._fixed >> _bits;
	return (*this);
}

Fixed&				Fixed::operator/(const Fixed  & obj )
{
	_fixed /= obj._fixed >> _bits;
	return (*this);
}

Fixed&				Fixed::operator++( void )
{
	_fixed += 1;
	return (*this);
}

Fixed&				Fixed::operator--( void )
{

	_fixed -= 1;
	return (*this);
}

Fixed				Fixed::operator++( int )
{
	Fixed	tmp;

	tmp = *this;
	this->operator++();
	return (tmp);
}

Fixed				Fixed::operator--( int )
{
	Fixed	tmp;

	tmp = *this;
	this->operator--();
	return (tmp);
}

Fixed&	Fixed::min( Fixed& n1, Fixed& n2 )
{
	if (n1 < n2)
		return (n1);
	return (n2);
}

Fixed&	Fixed::max( Fixed& n1, Fixed& n2 )
{
	if (n1 > n2)
		return (n1);
	return (n2);
}

Fixed const& Fixed::max(Fixed const& n1, Fixed const& n2) 
{
	if (n1._fixed > n2._fixed)
		return (n1);
  	return (n2);
}

Fixed const& Fixed::min(Fixed const& n1, Fixed const& n2) 
{
	if (n1._fixed > n2._fixed)
		return (n2);
  	return (n1);
}

Fixed& Fixed::operator=(const Fixed& obj) {
	// std::cout << "Assignation operator called" << std::endl;
	this->setRawBits(obj.getRawBits());
	return *this;
}

int     Fixed::getRawBits(void) const {
	// std::cout << "getRawBits member function called" << std::endl;
	return _fixed;
}

void    Fixed::setRawBits(int const raw) {
    _fixed = raw;
}

int		Fixed::toInt(void) const {
	return (_fixed >> _bits);
}

float	Fixed::toFloat(void) const {
	return (((float)_fixed /(1 << _bits)));
}

std::ostream&	operator<<(std::ostream &stream, const Fixed &obj) {
	stream << obj.toFloat();
	return stream;
}