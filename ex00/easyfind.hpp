#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <vector>
# include <list>
# include <deque>
# include <algorithm>

template <class T>
typename T::iterator	easyfind(T & container, int i);

# include "easyfind.tpp"

#endif
