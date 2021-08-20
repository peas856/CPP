#include "span.hpp"

void test_range(void) {
	std::cout << "*** test_range ***" << std::endl;
	

	std::cout << std::endl;
}

int main(void) {
	std::cout << "Error test : empty or only one!" << std::endl;
	Span sp = Span(0);
	try {
		std::cout << sp.shortestSpan() << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	Span sp1 = Span(1);
	sp1.addNumber(42);
	try {
		std::cout << sp.shortestSpan() << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "Error test : exceed slot!" << std::endl;
	Span sp3 = Span(2);
	try {
		sp3.addNumber(1);
		sp3.addNumber(2);
		sp3.addNumber(3);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "Func test : short and long span" << std::endl;
	Span sp4 = Span(5);
	sp4.addNumber(5);
	sp4.addNumber(3);
	sp4.addNumber(17);
	sp4.addNumber(9);
	sp4.addNumber(11);
	std::cout << sp4.shortestSpan() << std::endl;
	std::cout << sp4.longestSpan() << std::endl;
	std::cout << "Copy test : using range iter" << std::endl;
	Span sp5 = Span(10001);
	std::vector<int> range(10001, 10);
	range[5000] = 42;
	sp5.addNumber(range.begin(), range.end());
	std::cout << sp5.shortestSpan() << std::endl;
	std::cout << sp5.longestSpan() << std::endl;
	return 0;
}