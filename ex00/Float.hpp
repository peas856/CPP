#ifndef FLOAT_HPP
# define FLOAT_HPP

# include "ABase.hpp"

class Float : public ABase {

	public:
		Float();
		Float(std::string const& str);
		Float(Float const& src);
		virtual ~Float();
		Float& operator=(Float const& rhs);
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
		float    _f;
};

#endif