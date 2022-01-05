all:
	c++ -std=c++98 -g -Wall -Wextra -Werror main.cpp -o replace
test: main.o  
	c++ -g -Wall -Wextra -Werror main.cpp -o test

clean:
	rm -rf test
	rm -rf replace 
	rm -rf *.o
	rm -rf *.dSYM/
	
fclean:
	rm -rf *.replace
PHONY: replace
