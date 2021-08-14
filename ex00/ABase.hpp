#ifndef ABASE_HPP
# define ABASE_HPP

# include <iostream>
# include <string>
# include <limits>

class ABase {

	public:
		ABase();
		ABase(std::string const& str);
		ABase(ABase const& src);
		virtual ~ABase();
		ABase& operator=(ABase const& rhs);
		virtual std::string toChar(void) const = 0;
		virtual int toInt(void) const = 0;
		virtual float toFloat(void) const = 0;
		virtual double toDouble(void) const = 0;

	protected:
		std::string	_str;
};

#endif