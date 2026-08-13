#include "PmergeMe.hpp"

#include <cerrno>
#include <cstdlib>
#include <iostream>
#include <string>

int main(int argc, char** argv) {
	if (argc < 2) {
		std::cerr << "Error" << std::endl;
		return 1;
	}

	std::vector<int> input;
	for (int i = 1; i < argc; ++i) {
		std::string arg = argv[i];
		if (arg.empty() || arg[0] == '-') {
			std::cerr << "Error" << std::endl;
			return 1;
		}
		char* end = NULL;
		errno = 0;
		long value = std::strtol(arg.c_str(), &end, 10);
		if (errno == ERANGE || end == arg.c_str() || *end != '\0' || value < 0 || value > 2147483647L) {
			std::cerr << "Error" << std::endl;
			return 1;
		}
		input.push_back(static_cast<int>(value));
	}

	PmergeMe sorter;
	sorter.sortAndDisplay(input);
	return 0;
}
