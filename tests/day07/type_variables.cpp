#include <iostream>



template< typename T >
const T& max(const T &x, const T &y)
{
    return (x >= y) ? x : y;
}


int main()
{
    

    std::cout << max('a', 'b') << std::endl;
    std::cout << max<int, float>(1, 2) << std::endl;
    std::cout << max<int>(1.1, 2.2) << std::endl;
    std::cout << max("abc", "cde") << std::endl;
    return (0);
}
