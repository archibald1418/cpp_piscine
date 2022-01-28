#include "Data.hpp"

#include <iostream>
#include <cstdint>
#include <iomanip>

void	printByPointer(Data* pdata)
{
	std::cout << "Object at this address: " << std::endl;
	std::cout << *pdata << std::endl;
}

void	printPointers(Data* pdata, uintptr_t pDataHolder)
{
	std::cout << std::string(50, '=') << std::endl;
	std::cout << std::setw(15) << "pdata =>\t" << std::setw(20) <<\
		std::left << pdata << std::endl;
	std::cout << std::setw(15) << "pDataHolder =>\t" << std::setw(20) <<\
		std::left << pDataHolder << std::endl;
	std::cout << std::string(50, '=') << std::endl << std::endl;

	printByPointer(pdata);
	
	// Restores adjustment flags
	std::cout << std::resetiosflags(std::ios_base::adjustfield);
}



int main()
{
	Data data1("1");
	Data data2("2");
	Data data3("3");
	
	Data* pdata;
	uintptr_t pDataHolder;

	pdata = &data2;

	// Chaining
	pDataHolder = pdata->serialize(
		pdata->deserialize(
			pdata->serialize(pdata)));

	printPointers(pdata, pDataHolder);

	Data* deserialized = pdata->deserialize(pDataHolder);
	printPointers(deserialized, pDataHolder);


	

}
