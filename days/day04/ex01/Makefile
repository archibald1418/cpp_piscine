NAME = animal

all:
	clang++ -std=c++98 -g -Wall -Wextra -Werror *.cpp -o $(NAME) 
	#-fsanitize=address
test:
	clang++ -std=c++98 -g -Wall -Wextra -Werror *.cpp -o test

test-brain:
	clang++ -std=c++98 -Wall -Wextra -Werror Brain.cpp main.cpp -o test

clean:
	rm -rf test
	rm -rf $(NAME)
	rm -rf *.dSYM/

re: clean all
re-test: clean test
