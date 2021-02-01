#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <stack>

template<typename T>
class MutantStack: public std::stack<T>
{
	public :
		MutantStack() {};
	
		class iterator
		{
			private :
				T *e;
			
			public :
				iterator(T* p) : e(p) {};
				iterator operator++() {e++; return (*this); };
				iterator operator--() {e--; return (*this); };
				T& operator*() { return (*e); };
				T* operator->() { return (e); };
				bool operator==(const iterator &other) { return (e == other.e); };
				bool operator!=(const iterator &other) { return (e != other.e); };
		};
			
		iterator begin() { return (iterator(&this->top() - (this->size()) + 1)); };
		iterator end() { return (iterator(&this->top() + 1)); };
};

#endif