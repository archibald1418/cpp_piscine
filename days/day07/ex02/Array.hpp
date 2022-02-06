#ifndef ARRAY_H
# define ARRAY_H

#include <iostream>
#include <stdexcept>

template <typename T>
class Array
{
private:
    
    T* array;
    unsigned int _size;
    
public:
/*
    Any function implemented in a header 
    (except in the case of templates), and any
    unprotected header means 0 to the exercise.
*/
    Array() : array(NULL), _size(0){};

    ~Array()
    {
        delete[] this->array;
        this->array = NULL;
        _size = 0;
    };

    Array (const Array<T>& other) : _size(other._size) {
        this->array = new T[other._size]();
        *this = other;
    };

    Array<T>& operator=(const Array<T>& other){
        if (this == &other)
            return (*this);
        for (int i = 0; i < static_cast<int>(_size); i++)
            this->array[i] = other.array[i];
        return (*this);
    };

    Array(unsigned int n) : _size(n){
        this->array = new T[n];
    };

    T&  operator[](unsigned int i) throw(std::range_error){
        if (i >= _size)
            throw (std::range_error("IndexError: array index '" + std::to_string(i) + "' out of range"));
        return (this->array[i]);
    };

    unsigned int size(){
        return (this->_size);
    };

    T* getArray()const
    {
        return (this->array);
    };

};

template < typename T >
std::ostream& operator<<(std::ostream& os, Array<T>& array)
{
    os << "Some template array: " << std::endl;
    for (int i = 0; i < static_cast<int>(array.size()); i++)
        os << "< " << array.getArray()[i] << " >" <<  std::endl;
    return (os);
            
};

#endif