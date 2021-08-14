#ifndef CHAR_HPP
# define CHAR_HPP

# include "ABase.hpp"

class Char : public ABase {

	public:
		Char();
		Char(std::string const& str);
		Char(Char const& src);
		virtual ~Char();
		Char& operator=(Char const& rhs);
		virtual std::string toChar(void) const;
		virtual int toInt(void) const;
		virtual float toFloat(void) const;
		virtual double toDouble(void) const;

	private:
		char    _c;
};

#endif