#ifndef EASTFIND_HPP
# define EASTFIND_HPP
# include <exception>
# include <iostream>
# include <stack>
# include <deque>
# include <vector>
# include <list>

class NotFoundException : public std::exception
{
    virtual const char* what() const throw() { return ("NotFoundExcetion : value is not in container"); }
};

template<typename T>
int easyfind(T & container, int n)
{ 
    typename T::iterator begin = container.begin();
    typename T::iterator end = container.end();

    while (begin != end)
    {
        if (*begin == n)
            return n;
        begin++;
    }
    throw NotFoundException();
}

template<> int easyfind(std::stack<int> & container, int n)
{
    std::stack<int> copy(container);

    while (!copy.empty())
    {
        if (n == copy.top())
            return n;
        copy.pop();
    }
    throw NotFoundException();
}

#endif
