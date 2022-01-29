#include "iter.hpp"

#define ARRSIZESTRING   3
#define ARRSIZEINT      5
#define ARRSIZEFLOAT    3


template< typename T>
void    printArr(T* arrayPointer, int size)
{   
    std::cout << "Printing some array: " << std::endl;;
    for (int i = 0; i < size; i++)
    {
        std::cout << "\t< ";
        std::cout << arrayPointer[i];
        std::cout << " >";
        std::cout << std::endl;
    }
}

template< typename T>
T *cast_stack_pointer(T arrayPointer[])
{
    return (reinterpret_cast<T*>(arrayPointer));
}

int main()
{
    
    std::string stringArr[ARRSIZESTRING] = {
        "I", "am", "gay"
        };
    int intArr[ARRSIZEINT] = {1,2,3,4,5};
    float floatArr[ARRSIZEFLOAT] = {1.0f, 2.045f, 3.459875f};

    std::cout << "BEFORE:" << std::endl;

    printArr(stringArr, ARRSIZESTRING);
    printArr(floatArr, ARRSIZEFLOAT);
    printArr(intArr, ARRSIZEINT);

    std::cout << std::endl;

    std::cout << "AFTER:";
    std::cout << std::endl;

    iter(cast_stack_pointer(stringArr), ARRSIZESTRING, &stringAddExcl);
    printArr(stringArr, ARRSIZESTRING);
    iter(cast_stack_pointer(floatArr), ARRSIZEFLOAT, initSquare);
    printArr(floatArr, ARRSIZEFLOAT);
    iter(cast_stack_pointer(intArr), ARRSIZEINT, initSquare);
    printArr(intArr, ARRSIZEINT);

    std::cout << std::endl;

}