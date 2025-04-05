NAME=Towards_a_more_useful_fixed-point_number_class
CPPFLAGS=-Wall -Wextra -Werror -std=c++98
CXX=clang++

SRC=main.cpp Fixed.cpp
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
