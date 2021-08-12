#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("<ShrubberyCreation>", 145, 137) {
	_target = "default";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const& target) : Form("<ShrubberyCreation>", 145, 137) {
	_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& src) : Form("<ShrubberyCreation>", 145, 137) {
	*this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const& rhs) {
	_target = rhs._target;

	return *this;
}

void ShrubberyCreationForm::executeForm(void) const {
	std::ofstream out_file;

	out_file.open(_target + "_shrubbery", std::ios::out | std::ios::app);
	if (out_file.fail()) {
		std::cout << "Error: can not open file." << std::endl;
		return;
	}
                    out_file     
                    <<"───────────▄██▄"  << std::endl
                    <<"───────────█▒▒█"   << std::endl
                    <<"───────────▀██▀"   << std::endl
                    <<"───────────████"   << std::endl
                    <<"──────────██▓▓██"  << std::endl
                    <<"─────────██▓▓▓▓██"<< std::endl
                    <<"────────██▓▓O▓▓▓██"<< std::endl
                    <<"───────██▓▓▓▓▓O▓▓██"<< std::endl
                    <<"──────██▓▓▓O▓▓▓▓▓▓██"<< std::endl
                    <<"─────██▓▓O▓▓▓▓▓▓O▓▓██"<< std::endl
                    <<"────██▓▓▓▓▓▓▓O▓▓▓▓▓▓██"<< std::endl
                    <<"───███████▓O▓▓▓▓▓██████"<< std::endl
                    <<"─────██▓▓▓▓▓O▓▓▓O▓▓▓▓██"<< std::endl
                    <<"────██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██"<< std::endl
                    <<"───██▓▓▓▓O▓▓▓▓▓O▓▓▓▓▓▓▓██"<< std::endl
                    <<"──██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓██"<< std::endl
                    <<"─██▓▓▓▓▓O▓▓▓▓O▓▓▓▓▓▓O▓▓▓▓██"<< std::endl
                   << "████████████████████████████"<< std::endl
                   << "───────────██████"<< std::endl
                    <<"───────────██████"<< std::endl
                   << "───────────██████"<< std::endl
                    <<"───────────██████"<< std::endl
                   << "───────────██████"<< std::endl
                    <<"───────────██████"<< std::endl
                   << "───────────██████"<< std::endl
                   << "───────────██████"<< std::endl
                    <<"██████████████████████████████";
	out_file.close();
}