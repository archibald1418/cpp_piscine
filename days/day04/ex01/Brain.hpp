#ifndef BRAIN_H
# define BRAIN_H

# include <iostream>

class Brain
{
	public:
		static int _arraySize;
		
		// Q: howto allow certain classes to use it?
		std::string *ideas;

		Brain(std::string& thought);
		Brain();
		~Brain();
	
		Brain& operator=(const Brain& other);
		Brain(const Brain& other);
		void	think();
		void	setIdeas(std::string thought);
};

#endif