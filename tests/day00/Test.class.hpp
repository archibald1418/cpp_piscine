#ifndef TEST_CLASS_H
# define TEST_CLASS_H

class Witch {

// BY DEFAULT VISIBILITY IS PRIVATE
	public:

		int foo; // Member attribute

		Witch(void); // Constructor
		~Witch(void); // Destructor
	
		void	laugh (void); // Member function
		void	cast_spell(void);
		void	spell_damage(void); // Non-member function (depends on a static variable)
		int	gethp(void);
		int	getSpellsEnvoked(void);


		
		
	private:
		// Not visible from outside,
		// visible only from within a class
		int		_lol;
		void	_kek(void);
		static int	_nbInstances; // Static attribute
		
		int	hp;
		int	spells_envoked;
};

#endif

