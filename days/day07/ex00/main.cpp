#include "whatever.hpp"
#include <iostream>
#include <cassert>

int main( void )
{
    int a = 2;
    int b = 3;

    std::cout << "a = " << a << ", b = " << b << std::endl;
    ::swap( a, b ); std::cout << "SWAP!" << std::endl;
    std::cout << "a = " << a << ", b = " << b << std::endl;

    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;    

    std::string c = "chaine1";
    std::string d = "chaine2";
    std::cout << "c = " << c << ", d = " << d << std::endl;

    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

    ::swap(c, d);
    ::swap( a, b ); std::cout << "SWAP!" << std::endl;

    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

    std::string e = "equal";
    std::string f = "equal";

    // Check that the second object is returned if equal   
    assert (&(::min(e, f)) == &f && &(::max(e, f)) == &f);
    assert (&::min(f, e) == &e && &::max(f, e) == &e);
    
return (0);
}