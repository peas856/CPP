# include "ABase.hpp"
# include "Char.hpp"
# include "Int.hpp"
# include "Float.hpp"
# include "Double.hpp"
# include <exception>
# include <cctype>
# include <iomanip>

ABase* getType(std::string const& str) {
	int i;
	int double_flag = 0;

	i = 0;
	if (str.length() == 1 && !(std::isdigit(str[i])))
		return(new Char(str));
	if (str[0] == '+' || str[0] == '-')
		i++;
	if (str == "inf" || str == "nan"){
		i += 3;
		double_flag = 1;
	}
	while (str[i] && str[i] != 'f')
	{
		if (std::isalpha(str[i]))
			return (NULL);
		if (str[i] == '.')
			double_flag = 1;
		i++;
	}
	if (str[i] && str[i] == 'f')
		return (new Float(str));
	else if (double_flag == 1)
		return (new Double(str));
	else 
		return (new Int(str));
}

int getPrecision(std::string const& str){
	int	precision = 0;
	int i;

	if (str.find(".") == std::string::npos)
		return (1);
	i = str.find(".") + 1;
	while (str[i] && str[i] != 'f'){
		i++;
		precision++;
	}
	return precision;
}

void printTypes(ABase* type, std::string const& str) {
	int precision = getPrecision(str);

	std::cout << std::fixed;
	try {
		std::cout << "char: " << type->toChar() << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << "int: " << type->toInt() << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << "float: " << std::setprecision(precision) << type->toFloat() << "f" << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << "double: " << std::setprecision(precision) << type->toDouble() << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
}
