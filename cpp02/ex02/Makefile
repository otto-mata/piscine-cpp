NAME=Now_we\u2019re_talking
CXXFLAGS=-Wall -Wextra -Werror -std=c++98 -g
CXX=clang++

SRC=main.cpp Fixed.cpp
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
