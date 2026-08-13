#include "BitcoinExchange.hpp"

#include <cctype>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <sstream>

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& other) {
	*this = other;
}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& other) {
	if (this != &other)
		_prices = other._prices;
	return *this;
}

static std::string trim(const std::string& s) {
	std::string::size_type start = s.find_first_not_of(" \t");
	if (start == std::string::npos)
		return "";
	std::string::size_type end = s.find_last_not_of(" \t");
	return s.substr(start, end - start + 1);
}

bool BitcoinExchange::isLeapYear(int year) {
	return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
}

int BitcoinExchange::daysInMonth(int year, int month) {
	static const int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if (month == 2 && isLeapYear(year))
		return 29;
	return days[month - 1];
}

bool BitcoinExchange::isValidDate(const std::string& date) {
	if (date.size() != 10 || date[4] != '-' || date[7] != '-')
		return false;
	for (int i = 0; i < 10; ++i) {
		if (i == 4 || i == 7)
			continue;
		if (!std::isdigit(static_cast<unsigned char>(date[i])))
			return false;
	}
	int year = std::atoi(date.substr(0, 4).c_str());
	int month = std::atoi(date.substr(5, 2).c_str());
	int day = std::atoi(date.substr(8, 2).c_str());
	return month >= 1 && month <= 12 && day >= 1 && day <= daysInMonth(year, month);
}

bool BitcoinExchange::loadDatabase(const std::string& dbFile) {
	std::ifstream file(dbFile.c_str());
	if (!file.is_open())
		return false;

	std::string line;
	std::getline(file, line);
	while (std::getline(file, line)) {
		std::size_t comma = line.find(',');
		if (comma == std::string::npos)
			continue;
		double rate;
		std::istringstream iss(line.substr(comma + 1));
		std::string date = trim(line.substr(0, comma));
		if (isValidDate(date) && (iss >> rate))
			_prices[date] = rate;
	}
	return true;
}

void BitcoinExchange::processInput(const std::string& inputFile) const {
	std::ifstream file(inputFile.c_str());
	if (!file.is_open()) {
		std::cerr << "Error: could not open file." << std::endl;
		return;
	}

	std::string line;
	while (std::getline(file, line)) {
		if (line.empty())
			continue;

		std::size_t sep = line.find('|');
		if (sep == std::string::npos) {
			std::cerr << "Error: bad input => " << line << std::endl;
			continue;
		}

		std::string date = trim(line.substr(0, sep));
		std::string valueStr = trim(line.substr(sep + 1));
		if (date == "date") {
			continue;
		}
		if (!isValidDate(date)) {
			std::cerr << "Error: bad input => " << line << std::endl;
			continue;
		}

		double value;
		std::istringstream iss(valueStr);
		if (!(iss >> value) || !iss.eof()) {
			std::cerr << "Error: bad input => " << line << std::endl;
			continue;
		}
		if (value < 0) {
			std::cerr << "Error: not a positive number." << std::endl;
			continue;
		}
		if (value > 1000) {
			std::cerr << "Error: too large a number." << std::endl;
			continue;
		}

		std::map<std::string, double>::const_iterator it = _prices.lower_bound(date);
		if (it == _prices.end() || it->first != date) {
			if (it == _prices.begin()) {
				std::cerr << "Error: bad input => " << line << std::endl;
				continue;
			}
			--it;
		}

		std::cout << date << " => " << valueStr << " = " << value * it->second << std::endl;
	}
}
