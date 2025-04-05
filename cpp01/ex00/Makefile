NAME=BraiiiiiiinnnzzzZ
CXXFLAGS=-Wall -Wextra -Werror -std=c++98
CXX=clang++

SRC=Zombie.cpp \
	main.cpp \
	randomChump.cpp \
	newZombie.cpp
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
