NAME=My_First_Class_in_Orthodox_Canonical_Form
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
