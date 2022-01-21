#include <iostream>
class WrongAnimal
{
private:
	
public:
	WrongAnimal(){};
	~WrongAnimal(){};
	WrongAnimal(const WrongAnimal &other){(void)other;};
	WrongAnimal& operator=(const WrongAnimal& other){
		(void)other;
		return *this;
	};
	void	makeSound()const{
		std::cout << "Haha some animal goes brrrrr" << std::endl;
	};
	
};

class WrongCat : public WrongAnimal
{
	public:
		WrongCat()
		{
			std::cout << "Child created" << std::endl;
		};
		void	makeSound()const{
			std::cout << "Meoooooow" << std::endl;
		}
};



int main()
{
	const WrongAnimal *meta = new WrongAnimal();
	const WrongAnimal *wrongCatBad = new WrongCat();
	const WrongCat *wrongCatGood = new WrongCat();
	
	meta->makeSound();
	wrongCatBad->makeSound(); //will output the cat sound!
	wrongCatGood->makeSound(); //will output the cat sound!

	delete meta;
	delete wrongCatBad;
	delete wrongCatGood;
}
