#include <string>
#include <iostream>
#include <string>
#include <bitset>

#define BITS 8

void	get_first_bit(std::bitset<BITS> n)
{
	// std::cout << ((n >> (BITS - 1))) << std::endl;
	std::cout << n[0] << std::endl;
	
}

void	get_quartet()

void	show_bits(int n)
{
	std::bitset<BITS> bits = std::bitset<BITS> (n);
	std::cout << bits << std::endl;
	get_first_bit(bits);

	
}

int main(int argc, char **argv)
{
	if (argc != 2)
		return (1);
	int eight_bit_int = atoi(argv[1]);

	const int& ebi = eight_bit_int;

	show_bits(ebi);
	
}
