#ifndef CEHCKTYPE_HPP
# define CEHCKTYPE_HPP

# include "ABase.hpp"
# include "Char.hpp"
# include "Int.hpp"
# include "Float.hpp"
# include "Double.hpp"
# include <cctype>
# include <iomanip> //std::fixed


void printTypes(ABase* type, std::string const& str);
ABase* getType(std::string const& str);


#endif