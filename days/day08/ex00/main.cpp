#include <algorithm>
#include <list>
#include <deque>
#include <vector>
#include <iostream>
#include "easyfind.hpp"

int main()
{
    
    std::srand(time(NULL));

    std::vector<int> vector;

    int size = std::rand() % 15;
    int num = std::rand() % 15;

    for (int i = 0; i < size; i++)
        vector.push_back(std::rand() % 15);
    
    for (int i = 0; i < size; i++)
        std::cout << "v< " << vector.at(i) << " >" << std::endl;
    
    std::vector<int>::iterator iter;

    try
    {
        iter = easyfind(vector, num);
        std::cout << "Found it!: ";
        std::cout << *iter << std::endl;
        std::cout << "at index #" << std::distance(vector.begin(), iter) << std::endl;
    }
    catch (NotFound& e)
    {
        std::cout << e.what() << std::endl;
    }

}