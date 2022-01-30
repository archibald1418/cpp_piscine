#include "Span.hpp"
#include <iostream>

int main()
{
	srand(time(NULL));
    Span sp = Span(105);
    // sp.addNumber(5);
    // sp.addNumber(3);
    // sp.addNumber(17);
    // sp.addNumber(9);
    // sp.addNumber(11);

    try 
    {
        for (int i = 0; i < 100; i++)
            sp.addNumber(rand() % 200);
    }
    catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
}
// $> ./ex01
// 2
// 14
// $>
// 7
