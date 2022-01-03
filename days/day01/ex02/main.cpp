#include <iostream>
#include <iomanip>

int main()
{
    std::string stringOBJ("HI THIS IS BRAIN");
    std::string* stringPTR = &stringOBJ;
    const std::string& stringREF = stringOBJ;

    // Put address 
    std::cout << std::left <<  std::setw(15) <<  "string address" << std::left << std::setw(3) << "=" <<  &stringOBJ << std::endl;
    std::cout << std::left <<  std::setw(15) <<  "string pointer" << std::left << std::setw(3) << "="  << stringPTR << std::endl;
    std::cout << std::left <<  std::setw(15) <<  "string ref"     << std::left << std::setw(3) << "="  << &stringREF << std::endl;

    // Delineate
    std::cout << std::string(20, ' ') << std::endl;
    
    // Put string
    std::cout << std::left << std::setw(20) << "string by address" << std::setw(4) << "-> ";
    std::cout << *stringPTR << std::endl;
    std::cout << std::left << std::setw(20) << "string by reference" << std::setw(4) << "-> ";
    std::cout << stringREF << std::endl;
    
}