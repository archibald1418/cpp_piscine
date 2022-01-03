NAME = fight_club

SRC = HumanB.cpp HumanA.cpp Weapon.cpp

all:
	c++ -std=c++98 -Wall -Wextra -Werror $(SRC) main.cpp -o $(NAME)

clean:
	rm -rf *.o
	rm -rf *.dSYM/

fclean: clean
	rm -rf $(NAME)

re: fclean all
