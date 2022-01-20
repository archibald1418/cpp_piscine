#ifndef BRAIN_H
# define BRAIN_H

# include <iostream>

class Brain
{
	public:
		static int _arraySize;
		
		std::string *ideas;

		Brain(std::string& thought);
		Brain();
		~Brain();
	
		Brain& operator=(const Brain& other);
		Brain(const Brain& other);
		Brain* clone();
		void	think();
		void	setIdeas(std::string thought);
		
};

#endif