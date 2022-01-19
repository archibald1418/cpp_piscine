#include "Brain.hpp"

/*
	Brain.cpp:3:38: error: delegating constructors are permitted only in C++11
	Brain::Brain(std::string& thought) : Brain()
*/


Brain::Brain(std::string& thought)
{
	this->ideas = new std::string[_arraySize];
	for (int i = 0; i < _arraySize; i++)
		this->ideas[i] = thought;
}

Brain& Brain::operator=(const Brain& other)
{
	for (int i = 0; i < _arraySize; i++)
		this->ideas[i] = other.ideas[i];
	std::cout << "ideas are copied" << std::endl;
	return *this;
}


Brain::Brain(const Brain& other)
{
	delete this;
	*this = other;
}

Brain* Brain::clone()
{
	Brain* brain = new Brain();
	if (!brain)
		return (NULL);
	*brain = *this;
	return (brain);
}

Brain::Brain()
{
	this->ideas = new std::string[_arraySize];
	std::cout << "Ideas are born" << std::endl;
}

Brain::~Brain()
{
	std::cout << "'" + this->ideas[0] + "'" << std::endl;
	delete [] this->ideas;
	std::cout << "Ideas are dead" << std::endl;
}

void	Brain::think(){
	for (int i = 0; i < this->_arraySize; i++)
		std::cout << this->ideas[i];
	std::cout << std::endl;
}

void	Brain::setIdeas(std::string thought)
{
	for (int i = 0; i < _arraySize; i++)
		this->ideas[i] = thought;
}


int Brain::_arraySize = 100;