NAME =megaphone
CC = clang++
FLAGS = -std=c++98
DAY00 = ../../days/day00
EX01 = $(DAY00)/ex01
READLINEINCLUDE = ${HOME}/.brew/opt/readline/lib
TOGGLE_READLINE = -I$(READLINEINCLUDE) -lreadline

INCLUDE =$(EX01)
CONTACT_CLASS = $(EX01)/Contact.cpp
PHONEBOOK_CLASS = $(EX01)/PhoneBook.cpp

all: test-class

test-class:
	clang++ -std=c++98 test_class_main.cpp Test.class.cpp -o test

test-contact-class:
	clang++ -g -std=c++98 test_contact.cpp $(CONTACT_CLASS) -I$(INCLUDE) $(TOGGLE_READLINE) -o test

clean:
	rm -rf test

re: clean all
