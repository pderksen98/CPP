#ifndef SPAN_HPP
#define SPAN_HPP
#include <limits>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stdexcept>

class Span {
	private:
		unsigned int		_maxSize;
		std::vector<int>	_span;
	public:
		Span();
		Span(unsigned int N);
		Span(const Span& other);
		Span&	operator=(const Span& other);
		~Span();

		void 			addNumber(const int newNumber);
		unsigned int	shortestSpan();
		unsigned int	longestSpan();
		void			addVector(std::vector<int> vec);
};

#endif