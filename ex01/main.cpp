#include <iostream>
#include <iterator>
#include <vector>
#include "Span.hpp"

int main()
{
	Span sp(5);

	// element 0
	try {
		std::cout << sp.shortestSpan() << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	// element 1
	try {
		sp.addNumber(1);
		std::cout << sp.longestSpan() << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	// max element 1
	try {
		Span sp(1);
		sp.addNumber(42);
		sp.addNumber(42);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	// 42 example
	Span sp1 = Span(5);
	sp1.addNumber(6);
	sp1.addNumber(3);
	sp1.addNumber(17);
	sp1.addNumber(9);
	sp1.addNumber(11);
	std::cout << sp1.shortestSpan() << std::endl;
	std::cout << sp1.longestSpan() << std::endl;

	// addNumbers()
	Span sp2(10000);
	std::vector<int> vec(9999);
	vec.push_back(5);
	std::vector<int>::iterator first = vec.begin();
	std::vector<int>::iterator end = vec.end();
	sp2.addNumbers(first, end);
	std::cout << sp2.shortestSpan() << std::endl;
	std::cout << sp2.longestSpan() << std::endl;

	return 0;
}
