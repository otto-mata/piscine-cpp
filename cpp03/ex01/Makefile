NAME=Serena,_my_love!
CXXFLAGS=-Wall -Wextra -Werror -std=c++98
CXX=clang++

SRC=main.cpp ClapTrap.cpp ScavTrap.cpp
OBJ=$(SRC:.cpp=.o)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $^ -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

all: $(NAME)

re: fclean all

default: all

.PHONY: default re all fclean clean
