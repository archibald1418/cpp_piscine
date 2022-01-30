#include <algorithm>
#include <list> 
#include <vector> 
#include <deque> 

// template < class T, class Alloc = allocator<T> > class deque;
// template<
//     typename Container, 
//         template<
//             class = int, // NOTE: this works
//             class Alloc = std::allocator<int> >
//     class T >


template<
    typename Container, 
        template<
            typename,
            class Alloc = std::allocator<int> >
    class T >
int&  easyfind(T<int, std::allocator<int> >& container, int n)
{
    (void)container;
    (void)n;
}