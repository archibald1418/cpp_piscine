#ifndef DATA_H
# define DATA_H

#include <iostream>

class Data
{
    
public:
    std::string value;

    Data();
    ~Data();
    Data (const Data& other);
    Data& operator=(const Data& other);
    Data(std::string value);

    bool operator==(const Data& other);
    
    uintptr_t serialize(Data* ptr); // <=> ulong
    Data*     deserialize(uintptr_t raw);

    
};

std::ostream& operator<<(std::ostream& os, const Data& data);

#endif