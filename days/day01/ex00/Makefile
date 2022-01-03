NAME = zombie
SRC = newZombie.cpp randomChump.cpp Zombie.cpp

all:
	clang++ -std=c++98 -Wall -Wextra -Werror $(SRC) main.cpp -o $(NAME)

clean:
	rm -rf $(NAME)
	rm -rf *.dSYM/

fclean:
	rm -rf *.o

re: fclean clean all
