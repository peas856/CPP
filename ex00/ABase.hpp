#ifndef ABASE_HPP
# define ABASE_HPP

# include <iostream>
# include <string>

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
		
	protected:
		std::string	_str;
};

#endif