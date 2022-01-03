NAME = zombie
SRC = ZombieHorde.cpp Zombie.cpp

all:
	clang++ -g -fsanitize=address -std=c++98  -Wall -Wextra -Werror $(SRC) main.cpp -o $(NAME)

clean:
	rm -rf $(NAME)
	rm -rf *.dSYM/

fclean:
	rm -rf *.o

re: fclean clean all
