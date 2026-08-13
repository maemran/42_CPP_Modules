#include "PmergeMe.hpp"

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

std::vector<int> getJacobsthalOrder(int n) {
	std::vector<int> order;
	if (n < 1)
		return order;

	std::vector<int> jacobsthal;
	jacobsthal.push_back(1);
	jacobsthal.push_back(3);
	while (jacobsthal.back() - 1 < n) {
		std::size_t i = jacobsthal.size();
		jacobsthal.push_back(jacobsthal[i - 1] + 2 * jacobsthal[i - 2]);
	}

	for (std::size_t k = 1; k < jacobsthal.size(); ++k) {
		int high = jacobsthal[k] - 1;
		if (high > n)
			high = n;
		int low = jacobsthal[k - 1];
		for (int j = high; j >= low; --j)
			order.push_back(j);
	}
	return order;
}

void binaryInsertVector(std::vector<int>& arr, int value) {
	int low = 0;
	int high = static_cast<int>(arr.size());
	while (low < high) {
		int mid = low + (high - low) / 2;
		if (arr[mid] < value)
			low = mid + 1;
		else
			high = mid;
	}
	arr.insert(arr.begin() + low, value);
}

void binaryInsertDeque(std::deque<int>& arr, int value) {
	int low = 0;
	int high = static_cast<int>(arr.size());
	while (low < high) {
		int mid = low + (high - low) / 2;
		if (arr[mid] < value)
			low = mid + 1;
		else
			high = mid;
	}
	arr.insert(arr.begin() + low, value);
}

void fordJohnsonVector(std::vector<int>& arr) {
	if (arr.size() <= 1)
		return;

	std::vector<std::pair<int, int> > pairs;
	bool hasStraggler = false;
	int straggler = 0;
	for (std::size_t i = 0; i + 1 < arr.size(); i += 2) {
		if (arr[i] > arr[i + 1])
			pairs.push_back(std::make_pair(arr[i], arr[i + 1]));
		else
			pairs.push_back(std::make_pair(arr[i + 1], arr[i]));
	}
	if (arr.size() % 2 != 0) {
		hasStraggler = true;
		straggler = arr.back();
	}

	std::vector<int> largers;
	for (std::size_t i = 0; i < pairs.size(); i++)
		largers.push_back(pairs[i].first);

	std::vector<int> origLargers = largers;
	fordJohnsonVector(largers);

	std::vector<int> smallers(largers.size());
	std::vector<bool> used(pairs.size(), false);
	for (std::size_t i = 0; i < largers.size(); i++) {
		for (std::size_t j = 0; j < origLargers.size(); j++) {
			if (!used[j] && origLargers[j] == largers[i]) {
				smallers[i] = pairs[j].second;
				used[j] = true;
				break;
			}
		}
	}

	std::vector<int> sorted = largers;
	if (!smallers.empty())
		sorted.insert(sorted.begin(), smallers[0]);
	if (smallers.size() > 1) {
		std::vector<int> order = getJacobsthalOrder(static_cast<int>(smallers.size()) - 1);
		for (std::size_t i = 0; i < order.size(); i++)
			binaryInsertVector(sorted, smallers[order[i]]);
	}
	if (hasStraggler)
		binaryInsertVector(sorted, straggler);
	arr = sorted;
}

void fordJohnsonDeque(std::deque<int>& arr) {
	if (arr.size() <= 1)
		return;

	std::deque<std::pair<int, int> > pairs;
	bool hasStraggler = false;
	int straggler = 0;
	for (std::size_t i = 0; i + 1 < arr.size(); i += 2) {
		if (arr[i] > arr[i + 1])
			pairs.push_back(std::make_pair(arr[i], arr[i + 1]));
		else
			pairs.push_back(std::make_pair(arr[i + 1], arr[i]));
	}
	if (arr.size() % 2 != 0) {
		hasStraggler = true;
		straggler = arr.back();
	}

	std::deque<int> largers;
	for (std::size_t i = 0; i < pairs.size(); i++)
		largers.push_back(pairs[i].first);

	std::deque<int> origLargers = largers;
	fordJohnsonDeque(largers);

	std::deque<int> smallers(largers.size());
	std::vector<bool> used(pairs.size(), false);
	for (std::size_t i = 0; i < largers.size(); i++) {
		for (std::size_t j = 0; j < origLargers.size(); j++) {
			if (!used[j] && origLargers[j] == largers[i]) {
				smallers[i] = pairs[j].second;
				used[j] = true;
				break;
			}
		}
	}

	std::deque<int> sorted = largers;
	if (!smallers.empty())
		sorted.push_front(smallers[0]);
	if (smallers.size() > 1) {
		std::vector<int> order = getJacobsthalOrder(static_cast<int>(smallers.size()) - 1);
		for (std::size_t i = 0; i < order.size(); i++)
			binaryInsertDeque(sorted, smallers[order[i]]);
	}
	if (hasStraggler)
		binaryInsertDeque(sorted, straggler);
	arr = sorted;
}

}  // namespace

void PmergeMe::sortAndDisplay(const std::vector<int>& input) const {
	std::cout << "Before:";
	for (std::size_t i = 0; i < input.size(); ++i)
		std::cout << " " << input[i];
	std::cout << std::endl;

	std::vector<int> vec = input;
	clock_t start = clock();
	fordJohnsonVector(vec);
	clock_t end = clock();
	double vectorTime = static_cast<double>(end - start) / CLOCKS_PER_SEC * 1000000.0;

	std::deque<int> deq(input.begin(), input.end());
	start = clock();
	fordJohnsonDeque(deq);
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
