#include <iostream>
#include "Test.class.hpp"

Witch::Witch(void) {
	
	std::cout << "I am a witch, I spell thee! heeeheeehee" << std::endl;
	this->foo = 0;
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
