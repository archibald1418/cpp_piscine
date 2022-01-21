#ifndef BRAIN_H
# define BRAIN_H

# include <iostream>

#define SIZE 100

class Brain
{
	public:
		
		// Q: howto allow certain classes to use it?
		std::string *ideas;

		Brain(std::string& thought);
		Brain();
		~Brain();
	
		Brain& operator=(const Brain& other);
		Brain(const Brain& other);
		Brain* clone();
		void	think();
		void	setIdeas(std::string thought);
		std::string*	getIdeas();
		
};

#endif