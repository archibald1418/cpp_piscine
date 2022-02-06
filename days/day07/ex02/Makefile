
all: 
	c++ -Wall -Wextra -Werror *.cpp
test:
	c++ -g -Wall -Wextra -Werror *.cpp -o test
clean:
	rm -rf test a.out *.dSYM/

re-test: clean test
re: clean all
