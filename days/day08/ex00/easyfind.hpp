#ifndef EASYFIND_H
# define EASYFIND_H
#include <algorithm>
#include <list> 
#include <vector> 
#include <deque> 
#include <iterator>
#include <string>
#include <exception>

// template < class T, class Alloc = allocator<T> > class deque;
// template<
//     typename Container, 
//         template<
//             class = int, // NOTE: this works
//             class Alloc = std::allocator<int> >
//     class T >


// template<
//     typename Container, 
//         template<
//             typename,
//             class Alloc = std::allocator<int> >
//     class T >

class NotFound : public std::exception
{
    public:
        std::string msg;
        virtual const char* what() const throw()
        {
            return (this->msg.c_str());
        };
    
    NotFound(std::string msg) : msg(msg){};
    virtual ~NotFound() throw(){return;};
    
};


template < typename T >
typename T::iterator easyfind(T& container, int n)
{
    typename T::iterator it;

    it = std::find(container.begin(), container.end(), n);
    if (it == container.end())
        throw NotFound("Number " + std::to_string(n) + " not found");
    return (it);
}

template < typename T >
const typename T::iterator easyfind(const T& container, int n)
{
    const typename T::iterator it;
        it = std::find(container.begin(), container.end(), n);
        if (it == container.end())
            throw NotFound("Number " + std::to_string(n) + " not found");
    return (it);
}

// template < typename T >
// typename T::iterator iter_cast(typename T::iterator& iter)
// {
    
// }

#endif