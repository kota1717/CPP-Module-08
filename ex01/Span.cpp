#include "Span.hpp"
#include <algorithm>
#include <limits>

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

int Span::getMinValue() const {
	return *std::min_element(nums_.begin(), nums_.end());
}


int Span::getMaxValue() const {
	return *std::max_element(nums_.begin(), nums_.end());
}

void Span::addNumber(unsigned int value) {
	if (nums_.size() >= max_size_)
		throw std::length_error("Cannot add value.");
	nums_.push_back(value);
}

void Span::addNumbers(std::vector<int>::iterator first, std::vector<int>::iterator end) {
	unsigned int num_new_items = std::distance(first, end);
	if ((nums_.size() + num_new_items) > max_size_) {
		throw std::length_error("Cannot add value.");
	}
	nums_.insert(nums_.end(), first, end);
}

int Span::shortestSpan() {
	if (nums_.size() < 2)
		throw std::logic_error("shortestSpan() needs at least 2 element.");
	std::sort(nums_.begin(), nums_.end());
	int most_min_diff = std::numeric_limits<int>::max();
	for (size_t i = 0; i < nums_.size() - 1; i++) {
			int diff = nums_[i + 1] - nums_[i];
			if (diff < most_min_diff)
				most_min_diff = diff;
	}
	return most_min_diff;
}

int Span::longestSpan() {
	if (nums_.size() < 2)
		throw std::logic_error("longestSpan() needs at least 2 element.");
	int most_min_value = getMinValue();
	int large_value = getMaxValue();
	return large_value - most_min_value;
}
