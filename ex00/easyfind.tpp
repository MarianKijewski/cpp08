#include "easyfind.hpp"

template <class T>
typename T::iterator	easyfind(T & container, int i)
{
	return std::find(container.begin(), container.end(), i);
}
