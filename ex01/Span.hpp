#ifndef EX01_SPAN_HPP_
#define	EX01_SPAN_HPP_

#include <vector>
#include <iostream>

class Span {
	unsigned int max_size_;
	std::vector<int> nums_;
public:
	Span();
	Span(unsigned int N); //最大N個の整数を格納できる
	Span(const Span& other);
	Span& operator=(const Span& other);
	~Span();

	int getMinValue() const; // nums_から最小値を取得
	int getMaxValue() const; // nums_から最大値を取得

	void addNumber(unsigned int value); //Spanに単一の数値を追加する
	void addNumbers(std::vector<int>::iterator start,
									std::vector<int>::iterator end);
									// spanをイテレータの範囲を用いて一度に複数の値を追加する

	int shortestSpan(); //Spanに格納されている数値の最短
	int longestSpan(); //Spanに格納されている数値の最長
};

#endif

// 最大 N 個の整数を格納できる Span クラスを作成してください。
// N は unsigned int 型の変数であり、コンストラクタに渡される唯一のパラメータとなります。
// このクラスには、Span に単一の数値を
// 追加するための addNumber() というメンバ関数を設けてください。
// この関数は Span を埋めるために使用されます。
// すでに N 個の要素が格納されている状態で
// 新しい要素を追加しようとする試みは、例外をスローする必要があります。
// 次に、2 つのメンバ関数 shortestSpan() と longestSpan() を実装してください。
// これらはそれぞれ、格納されているすべての数値間の最短スパンまたは最長スパン（あるいは
// 距離と呼んでも構いません）を算出して返します。数値が一つも格納されていない場合、
// または数値が 1 つしかない場合は、スパンを特定できないため、例外をスローしてください。
// 少なくとも 10,000 個の数値を用いて Span をテストしてください。
// 多ければなお良いでしょう。
