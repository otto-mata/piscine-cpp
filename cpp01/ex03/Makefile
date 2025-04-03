NAME=Unnecessary_violence
CPPFLAGS=-Wall -Wextra -Werror -std=c++98
CXX=clang++

SRC=HumanA.cpp  HumanB.cpp  main.cpp  Weapon.cpp
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
