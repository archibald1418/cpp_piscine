#include <iostream>
#include "Fixed.hpp"
#include <cmath>
#include <stdio.h>


void	testFloatAddition()
{
	Fixed sum((float)2.13);
	// int sign(-1);
	std::cout << "Adding 2^(-i)" << std::endl << std::endl;
	for (int i = 0; i < 10; i++)
	{
		float add = powf(2.0, static_cast<float>(-i));
		sum += Fixed(add);
		std::cout << "sum + " << add << " = " << sum << std::endl;
		sum.getRawBits();
		std::cout << std::endl;
	}
}


int main( void ) 
{

	Fixed a;
	Fixed b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed two(2);
	std::cout.precision(8);
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << ++a << std::endl;
	std::cout << b / two + Fixed(4) + Fixed(7.45f) - Fixed(0.3f) << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << Fixed::min( a, b ) << std::endl << std::endl;

	const Fixed& eps = Fixed(EPSILON);
	const Fixed& epsm1  = Fixed(EPSILON - 0.00000000001f);
	const Fixed& epsgt  = Fixed(EPSILON + 0.001f);

	std::cout << (eps == epsm1) << std::endl;
	std::cout << (eps != epsm1) << std::endl;
	std::cout << (eps != epsgt) << std::endl;
	
	// testFloatAddition();
	
	return 0;
}
// Should output something like (I deleted the ctors/dtor logs):
// $> ./a.out
// 0
// 0.00390625
// 0.00390625
// 0.00390625
// 0.0078125
// 10.1016
// 10.1016
// $>
// 10
