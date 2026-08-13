#ifndef RPN_HPP
#define RPN_HPP

#include <string>

class RPN {
public:
	RPN();
	RPN(const RPN& other);
	~RPN();
	RPN& operator=(const RPN& other);

	bool evaluate(const std::string& expression, int& result) const;
};

#endif
