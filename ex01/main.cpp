#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void) {
    std::cout << "-----test1-----"<< std::endl;
	try 
    {
		Form test("F1", -1, 10);
	} 
    catch (std::exception& e) 
    {
		std::cout << e.what() << std::endl;
	}
    std::cout << "-----test2-----"<< std::endl;
    try 
    {
		Form test("F2", 50, 151);
	} 
    catch (std::exception& e) 
    {
		std::cout << e.what() << std::endl;
	}
    std::cout << "-----test3-----"<< std::endl;
    try 
    {
		Bureaucrat man("P1", 25);
		Form test("F3", 30, 10);
		std::cout << test << std::endl;
		man.signForm(test);
	} 
    catch (std::exception& e) 
    {
		std::cout << e.what() << std::endl;
	}
    std::cout << "-----test4-----"<< std::endl;
    try 
    {
		Bureaucrat man("P2", 25);
		Form test("F4", 10, 5);
		man.signForm(test);
	} 
    catch (std::exception& e) 
    {
		std::cout << e.what() << std::endl;
	}
    return 0;
}
