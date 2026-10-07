/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikota <ikota@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 13:21:46 by ikota             #+#    #+#             */
/*   Updated: 2026/10/07 15:24:20 by ikota            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX01_SPAN_HPP_
#define	EX01_SPAN_HPP_

#include <vector>
#include <iostream>

class Span {
	unsigned int max_size_;
	std::vector<int> nums_;
public:
	Span();
	Span(unsigned int N);
	Span(const Span& other);
	Span& operator=(const Span& other);
	~Span();

	int getMinValue() const;
	int getMaxValue() const;

	void addNumber(unsigned int value);
	void addNumbers(std::vector<int>::iterator first,
									std::vector<int>::iterator end);

	int shortestSpan();
	int longestSpan();
};

#endif
