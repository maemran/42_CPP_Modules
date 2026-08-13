#include "PmergeMe.hpp"

#include <algorithm>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <utility>

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe& other) {
	(void)other;
}

PmergeMe::~PmergeMe() {}

PmergeMe& PmergeMe::operator=(const PmergeMe& other) {
	(void)other;
	return *this;
}

namespace {

std::vector<int> jacobsthalOrder(int n) {
	std::vector<int> jacobsthal;
	jacobsthal.push_back(0);
	jacobsthal.push_back(1);
	while (jacobsthal.back() < n) {
		std::size_t i = jacobsthal.size();
		jacobsthal.push_back(jacobsthal[i - 1] + 2 * jacobsthal[i - 2]);
	}

	std::vector<int> order;
	for (std::size_t k = 1; k < jacobsthal.size(); ++k) {
		int high = jacobsthal[k];
		int low = jacobsthal[k - 1] + 1;
		for (int j = high; j >= low; --j)
			if (j < n)
				order.push_back(j);
	}
	return order;
}

std::vector<int> fordJohnsonVector(const std::vector<int>& input) {
	if (input.size() < 2)
		return input;

	std::vector<std::pair<int, int> > pairs;
	int straggler = 0;
	bool hasStraggler = false;

	std::size_t i = 0;
	for (; i + 1 < input.size(); i += 2) {
		int a = input[i];
		int b = input[i + 1];
		if (a < b)
			std::swap(a, b);
		pairs.push_back(std::make_pair(a, b));
	}
	if (i < input.size()) {
		straggler = input[i];
		hasStraggler = true;
	}

	std::sort(pairs.begin(), pairs.end());

	std::vector<int> main;
	std::vector<int> pend;
	for (std::size_t k = 0; k < pairs.size(); ++k) {
		main.push_back(pairs[k].first);
		pend.push_back(pairs[k].second);
	}

	main = fordJohnsonVector(main);

	std::vector<int> chain;
	chain.reserve(input.size());
	chain.push_back(pend[0]);
	chain.insert(chain.end(), main.begin(), main.end());

	std::vector<int> order = jacobsthalOrder(pend.size());
	for (std::size_t k = 0; k < order.size(); ++k) {
		int value = pend[order[k]];
		chain.insert(std::lower_bound(chain.begin(), chain.end(), value), value);
	}

	if (hasStraggler)
		chain.insert(std::lower_bound(chain.begin(), chain.end(), straggler), straggler);
	return chain;
}

std::deque<int> fordJohnsonDeque(const std::deque<int>& input) {
	if (input.size() < 2)
		return input;

	std::deque<std::pair<int, int> > pairs;
	int straggler = 0;
	bool hasStraggler = false;

	std::size_t i = 0;
	for (; i + 1 < input.size(); i += 2) {
		int a = input[i];
		int b = input[i + 1];
		if (a < b)
			std::swap(a, b);
		pairs.push_back(std::make_pair(a, b));
	}
	if (i < input.size()) {
		straggler = input[i];
		hasStraggler = true;
	}

	std::sort(pairs.begin(), pairs.end());

	std::deque<int> main;
	std::deque<int> pend;
	for (std::size_t k = 0; k < pairs.size(); ++k) {
		main.push_back(pairs[k].first);
		pend.push_back(pairs[k].second);
	}

	main = fordJohnsonDeque(main);

	std::deque<int> chain = main;
	chain.push_front(pend[0]);

	std::vector<int> order = jacobsthalOrder(pend.size());
	for (std::size_t k = 0; k < order.size(); ++k) {
		int value = pend[order[k]];
		chain.insert(std::lower_bound(chain.begin(), chain.end(), value), value);
	}

	if (hasStraggler)
		chain.insert(std::lower_bound(chain.begin(), chain.end(), straggler), straggler);
	return chain;
}

}  // namespace

void PmergeMe::sortAndDisplay(const std::vector<int>& input) const {
	std::cout << "Before:";
	for (std::size_t i = 0; i < input.size(); ++i)
		std::cout << " " << input[i];
	std::cout << std::endl;

	std::vector<int> vec = input;
	clock_t start = clock();
	vec = fordJohnsonVector(vec);
	clock_t end = clock();
	double vectorTime = static_cast<double>(end - start) / CLOCKS_PER_SEC * 1000000.0;

	std::deque<int> deq(input.begin(), input.end());
	start = clock();
	deq = fordJohnsonDeque(deq);
	end = clock();
	double dequeTime = static_cast<double>(end - start) / CLOCKS_PER_SEC * 1000000.0;

	std::cout << "After:";
	for (std::size_t i = 0; i < vec.size(); ++i)
		std::cout << " " << vec[i];
	std::cout << std::endl;

	std::cout << std::fixed << std::setprecision(5)
			  << "Time to process a range of " << input.size()
			  << " elements with std::vector : " << vectorTime << " us" << std::endl
			  << "Time to process a range of " << input.size()
			  << " elements with std::deque : " << dequeTime << " us" << std::endl;
}
