all:
	c++ -g -Wall -Wextra -Werror Karen.cpp main.cpp -o karenFilter
clean:
	rm -rf karenFilter
	rm -rf test
	rm -rf *.o
	rm -rf *.dSYM/
test: main.o Karen.o
	c++ -g -Wall -Wextra -Werror Karen.cpp main.cpp -o test
re: clean all
