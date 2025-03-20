#include "Span.hpp"

void	print_vec(const std::vector<int> & v)
{
	for (std::vector<int>::const_iterator i = v.begin(); i != v.end(); ++i)
		std::cout << *i << ' ';
	std::cout << std::endl;
}

int generate()
{
	const unsigned int	range = 100000;
	const bool			positive = false;
	if (positive)
		return std::rand() % range;
	else
		return std::rand() % range - range / 2;
}

int main()
{
	const unsigned int	N = 420000;
	Span				sp = Span(N);
	std::vector<int>	vec(N);

	srand(time(0));
	int (*gen)() = generate;
	std::generate(vec.begin(), vec.end(), gen);
	// print_vec(vec);
	sp.addNumber(vec.begin(), vec.end());

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	return 0;
}
