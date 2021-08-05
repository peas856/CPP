#include <iostream>
#include <fstream>
#include <string>

std::string convert_str(std::string& line, std::string& s1, std::string& s2) {
	std::string new_line;
	std::size_t	idx;

	idx = line.find(s1);
	if (idx != std::string::npos) {
		new_line += line.substr(0, idx);
		new_line += s2;
		new_line += line.substr(idx + s1.length(), std::string::npos);
		return (convert_str(new_line, s1, s2));
	}
	else
		return line;
}

void	replace(std::string& filename, std::string& s1, std::string& s2) {
	std::ifstream infile;
	std::ofstream outfile;
	std::string str;

	infile.open(filename, std::ios::in);
	outfile.open(filename + ".replace", std::ios::out);
	if (infile.fail() || outfile.fail()) {
		std::cout << "Error: file open err" << std::endl;
		exit(1);
	}
	while (!infile.eof()) {
		std::getline(infile, str);
		if (str.find(s1) != std::string::npos)
			str = convert_str(str, s1, s2);
		outfile << str << std::endl;
	}
	infile.close();
	outfile.close();
}

int	main(int argc, char *argv[]) {
	std::string	filename;
	std::string	s1;
	std::string	s2;

	if (argc != 4 || !argv[2][0] || !argv[3][0]) {
		std::cout << "Error: Invalid arg" << std::endl;
		return (0);
	}
	filename = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	replace(filename, s1, s2);
	return (0);
}

