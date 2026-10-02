/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikota <ikota@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 19:52:59 by ikota             #+#    #+#             */
/*   Updated: 2026/10/02 19:55:38 by ikota            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include "easyfind.hpp"

int main() {
	std::vector<int> vec;
	vec.push_back(10);
	vec.push_back(20);
	vec.push_back(30);

	try {
		std::vector<int>::iterator it = easyfind(vec, 20);
		std::cout << "Found: " << *it << std::endl;
		easyfind(vec, 99);
	} catch (const std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}
