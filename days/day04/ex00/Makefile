NAME = animal

all:
	clang++ -std=c++98 -Wall -Wextra -Werror Animal.cpp Dog.cpp Cat.cpp main.cpp -o $(NAME)
test:
	clang++ -std=c++98 -Wall -Wextra -Werror WrongAnimal.cpp -o test
clean:
	rm -rf a.out $(NAME) test
	rm -rf *.dSYM/

re: clean all
