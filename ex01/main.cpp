#include <iostream>
#include <iterator>
#include <vector>
#include "Span.hpp"

int main()
{
	// Span sp = Span(10000);
	// sp.addNumber(6);
	// sp.addNumber(3);
	// sp.addNumber(17);
	// sp.addNumber(9);
	// sp.addNumber(11);
	// std::cout << sp.shortestSpan() << std::endl;
	// std::cout << sp.longestSpan() << std::endl;
	// return 0;

	Span sp1 = Span(100);
	std::vector<int> vec(100, 10);
	vec.push_back(5);
	std::vector<int>::iterator first = vec.begin();
	std::vector<int>::iterator end = vec.end();
	sp1.addNumbers(first, end);
	std::cout << sp1.shortestSpan() << std::endl;
	std::cout << sp1.longestSpan() << std::endl;

	// Span sp1 = Span(1);
	// std::cout << sp1.shortestSpan() << std::endl;
	return 0;
}
