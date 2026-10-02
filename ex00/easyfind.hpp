/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikota <ikota@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 16:04:18 by ikota             #+#    #+#             */
/*   Updated: 2026/10/02 19:55:57 by ikota            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX00_EASYFIND_HPP_
#define EX00_EASYFIND_HPP_

#include <algorithm>

template<typename T>
typename T::iterator easyfind(T& nums, int value) {
	typename T::iterator it = std::find(nums.begin(), nums.end(), value);

	if (it == nums.end()) {
		throw std::runtime_error("Element not found");
	}
	return it;
}

#endif

// T が整数のコンテナであると仮定した場合、この関数は1つ目のパラメータ内で2つ目のパラメータの
// 最初の出現位置を特定する必要があります。
// もし該当する要素が見つからない場合は、例外を投げるか、あるいは任意のエラー値を返すことができます。
// ヒントが必要な場合は、標準コンテナの動作を分析してください。
// typenameは型だと明示するために使っている。
