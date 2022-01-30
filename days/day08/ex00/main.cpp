#include <algorithm>
#include <list>
#include <array>
#include <deque>
#include <vector>
#include <iostream>
#include "easyfind.hpp"



int main()
{
    
    std::srand(time(NULL));

    int size = std::rand() % 10;
    const int arraySize = 15;
    int num = std::rand() % 10;

    std::cout << size << std::endl;
    std::cout << arraySize << std::endl;

    std::vector<int> vector;
    std::deque<int> deque;
    std::array<int, arraySize> array;


    // Fill vector
    for (int i = 0; i < size; i++)
        vector.push_back(std::rand() % 15);

    // Fill deque
    for (int i = 0; i < size; i++)
        deque.push_back(std::rand() % 100);

    // // Fill array
    for (int i = 0; i < arraySize; i++)
        array[i] = std::rand() % 100;

    // Print vector    
    for (int i = 0; i < static_cast<int>(vector.size()); i++)
        std::cout << "v< " << vector.at(i) << " >" << std::endl;

    // Print deque
    for (int i = 0; i < static_cast<int>(deque.size()); i++)
        std::cout << "d> " << deque.at(i) << " <" << std::endl;

    // Print array
    for (std::array<int, arraySize>::iterator it = array.begin(); it != array.end(); it++)
     {
        std::cout << "a- " << *it << " -" << std::endl;
     }

    std::vector<int>::iterator viter = vector.begin(); 


    /* Search vector */
    std::cout << "Search vector" << std::endl;
    try
    {
        viter = easyfind(vector, num);
        std::cout << "Found it!: ";
        std::cout << *viter << std::endl;
        std::cout << "at index #" << std::distance(vector.begin(), viter) << std::endl;
    }
    catch (NotFound& e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl;

    /* Search deque */
    std::cout << "Search deque" << std::endl;
    std::deque<int>::iterator diter = deque.begin(); 
    try
    {
        diter = easyfind(deque, num);
        std::cout << "Found it!: ";
        std::cout << *diter << std::endl;
        std::cout << "at index #" << std::distance(deque.begin(), diter) << std::endl;
    }
    catch (NotFound& e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << "Search array" << std::endl;
    /* Search array */
    std::array<int, arraySize>::iterator aiter = array.begin();
    try
    {
        aiter = easyfind(array, num);
        std::cout << "Found it!: ";
        std::cout << *aiter << std::endl;
        std::cout << "at index #" << std::distance(array.begin(), aiter) << std::endl;
    }
    catch (NotFound& e)
    {
        std::cout << e.what() << std::endl;
    }

}