#ifndef SPAN_HPP
# define SPAN_HPP

# include <algorithm>
# include <numeric>
# include <vector>
# include <utility>
# include <iostream>

class Span
{

	private:

		std::vector<int>			v;
		std::vector<int>::iterator	i;

	public:

		Span();
		Span(unsigned int N);
		~Span();

		void	addNumber(int n);
		template <class InputIt>
		void	addNumber(InputIt first, InputIt last);
		int		shortestSpan();
		int		longestSpan();
	

};

template <class InputIt>
void	Span::addNumber(InputIt first, InputIt last)
{
	i = std::copy(first, last, i);
	if (i > v.end())
		throw std::out_of_range ("out of range");
	for (std::vector<int>::iterator iter = v.begin(); iter < v.end(); iter++)
		std::cout << *iter << std::endl;
}

#endif
