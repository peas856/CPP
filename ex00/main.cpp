#include "Bureaucrat.hpp"

int main(void) {
    std::cout << "-----test1-----"<< std::endl;
	try 
    {
		Bureaucrat test("P1", 0);
	} 
    catch (std::exception& e) 
    {
		std::cout << e.what() << std::endl;
	}
    std::cout << "-----test2-----"<< std::endl;
    try 
    {
		Bureaucrat test("P2", 151);
	} 
    catch (std::exception& e) 
    {
		std::cout << e.what() << std::endl;
	}
    std::cout << "-----test3-----"<< std::endl;
    try 
    {
		Bureaucrat test("P3", 2);
        test.incrementGrade();
        test.incrementGrade();
	} 
    catch (std::exception& e) 
    {
		std::cout << e.what() << std::endl;
	}
    std::cout << "-----test4-----"<< std::endl;
    try 
    {
		Bureaucrat test("P4", 149);
        test.decrementGrade();
        test.decrementGrade();
	} 
    catch (std::exception& e) 
    {
		std::cout << e.what() << std::endl;
	}
    return 0;
}