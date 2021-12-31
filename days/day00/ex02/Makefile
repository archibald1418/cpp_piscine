NAME=account

all:
	clang++ -g -std=c++98 -Wall -Wextra -Werror Account.cpp tests.cpp -o $(NAME)

clean:
	rm -rf $(NAME)
	rm -rf *.dSYM/

re: clean all
