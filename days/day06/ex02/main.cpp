#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#include <cstdlib>
#include <time.h>


int main()
{
    // Black box
    Base* randomObject = generate();

    std::cout << "Ищем по пойнтеру: " << std::endl;
    identify(randomObject);
    std::cout << "Ищем по ссылке: " << std::endl;
    identify(*randomObject);
    delete randomObject;
}