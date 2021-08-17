#ifndef INT_HPP
# define INT_HPP

# include "ABase.hpp"

class Int : public ABase {

	public:
		Int();
		Int(std::string const& str);
		Int(Int const& src);
		virtual ~Int();
		Int& operator=(Int const& rhs);
		virtual std::string toChar(void) const;
		virtual int toInt(void) const;
		virtual float toFloat(void) const;
		virtual double toDouble(void) const;
	private:
		int    _i;
};

#endif