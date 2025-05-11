#include "MutantStack.hpp"

template <typename T>
class MutantStack : private std::stack<T>
{

	private:

		typedef std::stack<T>	base_stack;

	public:

		using base_stack::top;
		using base_stack::empty;
		using base_stack::size;
		using base_stack::push;
		using base_stack::pop;

};
