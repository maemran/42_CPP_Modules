#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <map>
#include <string>

class BitcoinExchange {
public:
	BitcoinExchange();
	BitcoinExchange(const BitcoinExchange& other);
	~BitcoinExchange();
	BitcoinExchange& operator=(const BitcoinExchange& other);

	bool loadDatabase(const std::string& dbFile);
	void processInput(const std::string& inputFile) const;

private:
	std::map<std::string, double> _prices;

	static bool isValidDate(const std::string& date);
	static bool isLeapYear(int year);
	static int daysInMonth(int year, int month);
};

#endif
