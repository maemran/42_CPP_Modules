#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <deque>
#include <vector>

class PmergeMe {
public:
	PmergeMe();
	PmergeMe(const PmergeMe& other);
	~PmergeMe();
	PmergeMe& operator=(const PmergeMe& other);

	void sortAndDisplay(const std::vector<int>& input) const;
};

#endif
