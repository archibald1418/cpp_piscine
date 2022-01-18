NAME = animal

all:
	clang++ -std=c++98 -Wall -Wextra -Werror *.cpp -o $(NAME) -fsanitize=address
test:
	clang++ -std=c++98 -Wall -Wextra -Werror WrongAnimal.cpp

test-brain:
	clang++ -std=c++98 -Wall -Wextra -Werror Brain.cpp main.cpp -o test
