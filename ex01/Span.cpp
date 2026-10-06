#include "Span.hpp"

Span::Span() : max_size_(0), nums_(0) {}

Span::Span(unsigned int N) : max_size_(N) { nums_.reserve(N); }

Span::Span(const Span& other) {
	*this = other;
}

Span& Span::operator=(const Span& other) {
	if (this != &other)
		return *this;
	this->max_size_ = other.max_size_;
	this->nums_ = other.nums_;
	return *this;
}

Span::~Span() {}

void Span::addNumber(unsigned int value) {
	if (nums_.size() >= max_size_)
		throw std::length_error("cannot add value");
	nums_.push_back(value);
}

// すでにN個格納されているのに呼び出せれたら例外を投げる

void addNumbers(std::vector<int>::iterator start, std::vector<int>::iterator end) {
	
}

int Span::shortestSpan() {

}

int Span::longestSpan() {

}

//数値がない、一つしかないときは差をとれないから例外を投げる
