#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void) {
    std::cout << "-----test1-----"<< std::endl;
	try 
    {
		ShrubberyCreationForm form("t1");
		Bureaucrat man("P1", 146);
		man.signForm(form);
		man.execute_Form(form);
	} 
    catch (std::exception& e) 
    {
		std::cout << e.what() << std::endl;
	}
    std::cout << "-----test2-----"<< std::endl;
    try 
    {
		ShrubberyCreationForm form("t1");
		Bureaucrat man("P1", 20);
		Bureaucrat man2("P2", 140);
		man.signForm(form);
		man.execute_Form(form);
		man2.execute_Form(form);
	} 
    catch (std::exception& e) 
    {
		std::cout << e.what() << std::endl;
	}
    std::cout << "-----test3-----"<< std::endl;
    try 
    {
		RobotomyRequestForm form("t1");
		Bureaucrat man("P1", 20);
		man.signForm(form);
		man.execute_Form(form);
	} 
    catch (std::exception& e) 
    {
		std::cout << e.what() << std::endl;
	}
    std::cout << "-----test4-----"<< std::endl;
    try 
    {
		PresidentialPardonForm form("t1");
		Bureaucrat man("P1", 20);
		Bureaucrat man2("P2", 4);

		man.execute_Form(form);
		man2.signForm(form);
		man2.execute_Form(form);
	} 
    catch (std::exception& e) 
    {
		std::cout << e.what() << std::endl;
	}
    return 0;
}