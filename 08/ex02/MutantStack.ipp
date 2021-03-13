#include "MutantStack.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/
template<typename T>
MutantStack<T>::MutantStack()
: std::stack<T>()
{
}

template<typename T>
MutantStack<T>::MutantStack( const MutantStack & src )
: std::stack<T>(src)
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/
template<typename T>
MutantStack<T>::~MutantStack()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/
template<typename T>
MutantStack<T> & MutantStack<T>::operator=( MutantStack<T> const & rhs )
{
	if (this != rhs)
		std::stack<T>::operator=(rhs);
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/