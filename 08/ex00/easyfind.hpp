#ifndef EASTFIND_HPP
# define EASTFIND_HPP
# include <exception>
# include <iostream>

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

#endif
