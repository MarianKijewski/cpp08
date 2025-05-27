#ifndef MUTANTSTACK_TPP
# define MUTANTSTACK_TPP
# include "MutantStack.hpp"

template < typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T>
{

	private:

		typedef std::stack<T, Container>	base_stack;

	public:

		MutantStack();
		MutantStack(const MutantStack &cpy);
		~MutantStack();
		MutantStack &	operator= (const MutantStack &rhs);

		using typename base_stack::container_type;
		typedef typename container_type::iterator iterator;
		typedef typename container_type::const_iterator const_iterator;

		iterator begin();
		iterator end();
		const_iterator begin() const;
		const_iterator end() const;;


};

template< typename T, typename Container >
MutantStack<T, Container>::MutantStack() : base_stack()
{
}

template< typename T, typename Container >
MutantStack<T, Container>::MutantStack(const MutantStack &cpy) : base_stack(cpy)
{
}

template< typename T, typename Container >
MutantStack<T, Container>::~MutantStack()
{
}

template< typename T, typename Container >
MutantStack<T, Container> & MutantStack<T, Container>::operator=(const MutantStack &rhs)
{
	base_stack::operator=(rhs);

	return *this;
}

template< typename T, typename Container >
typename MutantStack<T, Container>::iterator MutantStack<T, Container>::begin()
{
	return this->c.begin();
}

template< typename T, typename Container >
typename MutantStack<T, Container>::iterator MutantStack<T, Container>::end()
{
	return this->c.end();
}

template< typename T, typename Container >
typename MutantStack<T, Container>::const_iterator MutantStack<T, Container>::begin() const
{
	return this->c.begin();
}

template< typename T, typename Container >
typename MutantStack<T, Container>::const_iterator MutantStack<T, Container>::end() const
{
	return this->c.end();
}


#endif // MUTANTSTACK_TPP
