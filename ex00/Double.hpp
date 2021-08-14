#ifndef DOUBLE_HPP
# define DOUBLE_HPP

# include "ABase.hpp"

class Double : public ABase {

	public:
		Double();
		Double(std::string const& str);
		Double(Double const& src);
		virtual ~Double();
		Double& operator=(Double const& rhs);
		virtual std::string toChar(void) const;
		virtual int toInt(void) const;
		virtual float toFloat(void) const;
		virtual double toDouble(void) const;


        class NonDisplayableException : public std::exception {
			public:
				const char* what(void) const throw ();
		};

		class ImpossibleException : public std::exception {
			public:
				const char* what(void) const throw ();
		};

		class NanfException : public std::exception {
			public:
				const char* what(void) const throw ();
		};

		class NandException : public std::exception {
			public:
				const char* what(void) const throw ();
		};


	private:
		double    _d;
};

#endif