#include "Data.hpp"

Data::Data(){ }
Data::~Data(){ }
Data::Data(std::string value) : value(value){
    std::cout << "Data type created:\n\t";
    std::cout << *this;
}
Data::Data (const Data& other)
{
    *this = other;
}
Data& Data::operator=(const Data& other)
{
    if (this == &other)
        return (*this);
    this->value = other.value;
    return (*this);
}

bool Data::operator==(const Data& other)
{
    return (this->value == other.value);
}


uintptr_t Data::serialize(Data* ptr)
{
    std::cout << "Serialized!" << std::endl;
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data* Data::deserialize(uintptr_t raw)
{
    std::cout << "Deserialized!" << std::endl;
    return (reinterpret_cast<Data*>(raw));
}


std::ostream& operator<<(std::ostream& os, const Data& data)
{
    os << "Data.value => " << data.value << std::endl;
    return (os);
}




