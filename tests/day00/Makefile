NAME =megaphone
CC = clang++
FLAGS = -std=c++98
DAY00 = ../../days/day00
EX01 = $(DAY00)/ex01
EX02 = $(DAY00)/ex02
READLINEINCLUDE = ${HOME}/.brew/opt/readline/lib
TOGGLE_READLINE = -I$(READLINEINCLUDE) -lreadline

INCLUDE =$(EX01) 
CONTACT_CLASS = $(EX01)/Contact.cpp
PHONEBOOK_CLASS = $(EX01)/PhoneBook.cpp
ACCOUNT_CLASS = $(EX02)/Account.cpp

all: test-class

test-class:
	clang++ -std=c++98 test_class_main.cpp Test.class.cpp -o test

test-contact-class:
	clang++ -g -std=c++98 test_contact.cpp $(CONTACT_CLASS) -I$(INCLUDE) $(TOGGLE_READLINE) -o test

test-phonebook-class:
	clang++ -g -std=c++98 test_phonebook.cpp $(PHONEBOOK_CLASS) $(CONTACT_CLASS) -I$(INCLUDE) $(TOGGLE_READLINE) -o test
test-account-class:
	clang++ -g -std=c++98 test_account.cpp $(ACCOUNT_CLASS) -I$(EX02) -o test

clean:
	rm -rf test

re: clean all
