#include <iostream>
#include <string>
#include <exception>
#include "Converter.hpp"

int			main(int argc, char **argv)
{
	Converter	scalar;
	char 		*ptrEnd;
	double 		num;

		if (argc == 2)
		{
			num = strtod(argv[1], &ptrEnd);
			if (&ptrEnd[0] == &argv[1][0]
			&& static_cast<std::string>(argv[1]).length() == 1)
				num = *ptrEnd;
			if ((isprint(*ptrEnd) && static_cast<std::string>(argv[1]).length() != 1)
			&& !(&ptrEnd[0] != &argv[1][0]
			&& *ptrEnd == 'f'
			&& static_cast<std::string>(ptrEnd).length() == 1))
				throw Impossible();
			scalar.setNum(num);
			scalar.convert("char");
			scalar.convert("int");
			scalar.convert("float");
			scalar.convert("double");
		}
		else
			std::cerr << "Error: count argc != 2" << std::endl;
	return (0);
}

