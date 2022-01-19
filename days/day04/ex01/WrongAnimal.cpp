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
		std::cout << "Haha parent goes brrrrr" << std::endl;
	};
	
};

class WrongCat : public WrongAnimal
{
	public:
		WrongCat(){
			std::cout << "Child created" << std::endl;
		};
};



int main()
{
	const WrongAnimal *meta = new WrongAnimal();
	const WrongAnimal *wrongCat = new WrongCat();
	wrongCat->makeSound(); //will output the cat sound!
	meta->makeSound();
}
