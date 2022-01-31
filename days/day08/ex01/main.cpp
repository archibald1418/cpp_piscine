#include "Span.hpp"
#include <iostream>

#define SIZE 10

int main()
{
	srand(time(NULL));

    

    Span sp = Span(SIZE);

    // sp.addNumber(5);
    // sp.addNumber(3);
    // sp.addNumber(17);
    // sp.addNumber(9);
    // sp.addNumber(11);

    try 
    {
        for (int i = 0; i < SIZE; i++)
            sp.addNumber(rand() % 200);
        std::cout << "Printing array:" << std::endl;
        std::cout << "[ " << std::endl;
        for (unsigned int i = 0; i < sp.getNum(); i++)
            std::cout << "\t" << sp.getNumbers().at(i) << "," << std::endl;
        std::cout << "]" << std::endl;
    }
    catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
        return (1);
    }

    std::cout << "Shortest span: " << std::endl;
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << "Longest span: " << std::endl;
    std::cout << sp.longestSpan() << std::endl;
}
// $> ./ex01
// 2
// 14
// $>
// 7
