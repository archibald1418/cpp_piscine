#ifndef MUTANTSTACK_H
# define MUTANTSTACK_H

# include <stack>
# include <vector>

template <typename T> 
class MutantStack : public std::stack<T> 
{
    public:
        typedef typename std::stack<T>::container_type::iterator        iterator;
        typedef typename std::stack<T>::container_type::const_iterator  const_iterator;

        const_iterator      begin()const;
        const_iterator      end()const;
        iterator            begin();
        iterator            end();
        


    public:
        MutantStack();
        ~MutantStack();
        MutantStack(const MutantStack<T>& other);
        MutantStack<T>& operator=(const MutantStack<T>& other);

};



template <typename T>
MutantStack<T>::MutantStack()
{
    
};

template <typename T>
MutantStack<T>::~MutantStack()
{
    
}

template <typename T>
MutantStack<T>::MutantStack (const MutantStack<T>& other)
{
    *this = other;
}

template <typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack<T>& other)
{
    if (this == &other)
        return (*this);
    this->c = other.c;
    return (*this);
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
    return (std::begin(std::stack<T>::c));
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::begin()const
{
    return (std::begin(std::stack<T>::c));
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
    return (std::end(std::stack<T>::c));
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::end()const
{
    return (std::end(std::stack<T>::c));
}

#endif