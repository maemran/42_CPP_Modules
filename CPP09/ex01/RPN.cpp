#include "RPN.hpp"

#include <cctype>
#include <sstream>
#include <stack>

RPN::RPN() {}

RPN::RPN(const RPN& other) {
	(void)other;
}

RPN::~RPN() {}

RPN& RPN::operator=(const RPN& other) {
	(void)other;
	return *this;
}

static bool isOperator(char c) {
	return c == '+' || c == '-' || c == '*' || c == '/';
}

bool RPN::evaluate(const std::string& expression, int& result) const {
	std::stack<int> operands;
	std::istringstream iss(expression);
	std::string token;

	while (iss >> token) {
		if (token.size() == 1 && std::isdigit(static_cast<unsigned char>(token[0]))) {
			operands.push(token[0] - '0');
		} else if (token.size() == 1 && isOperator(token[0])) {
			if (operands.size() < 2)
				return false;
			int b = operands.top();
			operands.pop();
			int a = operands.top();
			operands.pop();
			if (token[0] == '/' && b == 0)
				return false;
			switch (token[0]) {
				case '+':
					operands.push(a + b);
					break;
				case '-':
					operands.push(a - b);
					break;
				case '*':
					operands.push(a * b);
					break;
				case '/':
					operands.push(a / b);
					break;
			}
		} else {
			return false;
		}
	}

	if (operands.size() != 1)
		return false;
	result = operands.top();
	return true;
}
