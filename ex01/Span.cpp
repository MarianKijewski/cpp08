#include "Span.hpp"

Span::Span()
{
	v = std::vector<int>(0);
	i = v.begin();
}

Span::Span(unsigned int N)
{
	v = std::vector<int>(N);
	i = v.begin();
}

Span::~Span()
{
}

void	Span::addNumber(int n)
{
	if (i == v.end())
		throw std::out_of_range ("out of range");
	*i = n;
	i++;
}

int		Span::shortestSpan()
{
	if (std::distance(v.begin(), i) < 2)
		throw std::length_error("not enough values");
	std::vector<int> temp(v.begin(), i);
	std::sort(temp.begin(), temp.end());
	std::adjacent_difference(temp.begin(), temp.end(), temp.begin());
	return *std::min_element(temp.begin(), temp.end());
}
	
int		Span::longestSpan()
{
	if (std::distance(v.begin(), i) < 2)
		throw std::length_error("not enough values");
	std::pair<std::vector<int>::iterator, std::vector<int>::iterator> minmax;
	minmax = std::minmax_element(v.begin(), i);
	return *minmax.second - *minmax.first;
}
