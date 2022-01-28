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

    identify(randomObject);
}