#include "easyfind.hpp"

int	main(void)
{
	std::vector<int> v;
	v.push_back(8);
	v.push_back(4);
	v.push_back(5);
	v.push_back(9);
	std::deque<int> d;
	d.push_back(7);
	d.push_back(5);
	d.push_back(16);
	d.push_back(8);
	std::list<int> l;
	l.push_back(2);
	l.push_back(8);
	l.push_back(4);
	l.push_back(9);

	int val = 8;
	std::vector<int>::iterator it = easyfind(v, val);
	if (it != v.end())
	std::cout << val << " found!" << std::endl;
	*it = 9;
	it = easyfind(v, val);
	if (it != v.end())
		std::cout << val << " found!" << std::endl;
	val++;
	if (easyfind(d, val) != d.end())
		std::cout << val << " found!" << std::endl;
	if (easyfind(l, val) != l.end())
		std::cout << val << " found!" << std::endl;
	return 0;
}
