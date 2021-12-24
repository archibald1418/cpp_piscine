#include <iostream>
#include "Test.class.hpp"


Witch::Witch(void)  {
	
	std::cout << "I am a witch, I can spell thee! heeeheeehee" << std::endl;

	this->foo = 0;
	this->hp = 100;
	this->spells_envoked = 0;
	this->_lol = 0;
	this->_nbInstances++;
	// NOTE: init lists only since c++11
	return ;
}

Witch::~Witch(void){

	std::cout << "Oh nooo, I'm melting, I'm melting!!....... " << std::endl;
	return ;
}

void	Witch::laugh (void)
{
	std::cout << "hee hee" << std::endl;
	this->foo = 666;
	return;
}

void	Witch::cast_spell(void)
{
	std::cout << "I spell thee! You're cursed now!" << std::endl;
	std::cerr << "One spell cast. Hp lost" << std::endl;
	this->spells_envoked++;
}

void	Witch::spell_damage(void)
{
	if (this->spells_envoked > 1)
		this->hp /= spells_envoked; 
}

int		Witch::gethp(void)
{
	return (this->hp);
}

int		Witch::getSpellsEnvoked(void)
{
	return (this->hp);
}

// Initialize a static attribute
int		Witch::_nbInstances = 0;

// Static methods could be useful in a fabric 
