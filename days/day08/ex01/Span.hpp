#ifndef SPAN_H
# define SPAN_H

#include <exception>
#include <utility>
#include <cmath>
#include <limits>
#include <iostream>
#include <vector>

// #define INT_MIN std::numeric_limits<int>::min()
// #define INT_MAX std::numeric_limits<int>::max()



class SpanIsFull : public std::exception
{
    public:
    virtual const char *what() const throw()
    {
        return ("Error: Span is full");
    }
    virtual ~SpanIsFull() throw(){};
};
 
class SpanIsSmall : public std::exception
{
    public:
        virtual const char *what() const throw()
        {
            return ("Error: Span is too small: should be at least length 2");
        }
        virtual ~SpanIsSmall() throw(){};
};

class Span
{
private:

    unsigned int num;
    std::vector<int>numbers;

public:

    const std::vector<int>& getNumbers()const
    {
        return (this->numbers);
    }

    unsigned int getNum()const
    {
        return (this->num);
    }

    Span() : num(1)
    {
        throw SpanIsSmall();
    };
    ~Span()
    {
        // delete &this->numbers;
    };
    Span (const Span& other) : num(other.num)
    {
        *this = other;
    };
    Span& operator=(const Span& other)
    {
        if (this == &other)
            return (*this);
        delete &this->numbers;
        
        this->num = 0;
        this->numbers = *(new std::vector< int >);
        for (int i = 0; i < static_cast<int>(other.numbers.size()); i++)
        {
            this->numbers.push_back(other.numbers[i]);
            this->num++;
        }
        return (*this);
    };

    Span(const unsigned int num) : num(num)
    {
        if (num <= 1)
            throw SpanIsSmall();
        this->numbers = (*new std::vector<int>);
    }

    void    addNumber(int num)
    {
        if ((this->numbers.end() - this->numbers.begin()) >= this->num)
            throw SpanIsFull();
        this->numbers.push_back(num);
    }

    std::pair<int , int> longestSpan()
    {
        std::pair<int, int>PAIR = std::make_pair(0, 0);

        for (int i = 0; i < static_cast<int>(this->num); i++)
        {
            for (int j = 0; j < static_cast<int>(this->num); j++)
            {
                if (i != j && 
                std::abs(this->numbers[i] - this->numbers[j]) >
                std::abs(PAIR.first - std::abs(PAIR.second)))
                    PAIR = std::make_pair(this->numbers[i], this->numbers[j]);
            }
        }
        return (PAIR);
    }
    
    std::pair<int , int> shortestSpan()
    {
        std::pair<int, int>PAIR = std::make_pair(INT_MAX, 0);

        for (int i = 0; i < static_cast<int>(this->num); i++)
        {
            for (int j = 0; j < static_cast<int>(this->num); j++)
            {
                if (i != j && \
                    std::abs(this->numbers[i] - this->numbers[j]) <
                    std::abs(PAIR.first - std::abs(PAIR.second)))
                    PAIR = std::make_pair(this->numbers[i], this->numbers[j]);
            }
        }
        return (PAIR);
    }
};

std::ostream& operator<<(std::ostream& os, std::pair<int, int>pair)
{
    std::cout << "( " << pair.first << ", " << pair.second << " )" << std::endl;
    return(os);
};



#endif