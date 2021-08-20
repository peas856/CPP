#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <algorithm>
# include <iterator>
# include <vector>

class Span {
	public:
		Span(void);
		Span(unsigned int N);
		Span(Span const& src);
		virtual ~Span(void);
		Span& operator=(Span const& rhs);
		void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		void addNumber(int n);
		unsigned long shortestSpan(void);
		unsigned long longestSpan(void);
		class FullException : public std::exception {
			public:
				const char* what(void) const throw ();
		};
		class EmptyException : public std::exception {
			public:
				const char* what(void) const throw ();
		};
	private:
		unsigned int		_slot;
		std::vector<int>	_vec;
};

#endif