NAME =

all:
	clang++ -std=c++98 -Wall -Wextra -Werror *.cpp -o $(NAME)

clean:
	rm -rf a.out *.dSYM/ test

test:
	clang++ -std=c++98 -Wall -Wextra -Werror *.cpp -o test

re-test: clean test
re: clean all