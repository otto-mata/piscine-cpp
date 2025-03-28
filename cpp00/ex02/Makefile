NAME=GlobalBankstersUnited-Account-Tests
CPPFLAGS=-Wall -Wextra -Werror -std=c++98
CXX=clang++

SRC=tests.cpp \
	Account.cpp
OBJ=$(SRC:.cpp=.o)

$(NAME): $(OBJ)
	$(CXX) $(CPPFLAGS) $^ -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

all: $(NAME)

re: fclean all

default: all

.PHONY: default re all fclean clean
