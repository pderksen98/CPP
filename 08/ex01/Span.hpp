#ifndef SPAN_HPP
#define SPAN_HPP
#include <limits>
#include <vector>
#include <iostream>

// #include <algorithm>

int	randomInt(void);
std::vector<int>	getRandomVector(int N);

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

		void 			addNumber(int newNumber);
		unsigned int	shortestSpan();
		unsigned int	longestSpan();
		void			addMany(int N);
};

#endif