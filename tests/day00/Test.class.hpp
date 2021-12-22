#ifndef TEST_CLASS_H
# define TEST_CLASS_H

class Witch {

	public:

		int foo; // Member attribute

		Witch(void); // Constructor
		~Witch(void); // Destructor
	
		void	laugh (void); // Member function
	
	private:
		// Not visible from outside,
		// visible only from within a class

		int		_lol;
		void	_kek(void);
};

#endif

