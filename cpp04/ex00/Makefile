NAME=Polymorphism
CXX=c++
DEPS=-MMD
DEBUG=-g -O0
CXXFLAGS=-Wall -Werror -Wextra -std=c++98 -Iincludes/ $(DEPS) $(DEBUG)
SRC=src/main.cpp \
	src/Animal.cpp \
	src/WrongAnimal.cpp \
	src/Cat.cpp \
	src/WrongCat.cpp \
	src/Dog.cpp

OBJDIR=./build
OBJ=$(addprefix $(OBJDIR)/,$(SRC:.cpp=.o))

all: top $(NAME) bottom

$(OBJDIR)/%.o: %.cpp
	@mkdir -p $(dir $@)
	@$(CXX) $(CXXFLAGS) -o $@ -c $<
	@printf "\t'$@' compiled ($(CXX), $(CXXFLAGS), $<)\n"

$(NAME): $(OBJ)
	@$(CXX) $(CXXFLAGS) -o $@ $^
	@printf "\t'$@' compiled ($(CXX), $(CXXFLAGS), [$^])\n"

clean:
	@rm -rf $(OBJDIR)
	@printf " > Removed '$(OBJDIR)'\n"

fclean: clean
	@rm -f $(NAME)
	@printf " > Removed '$(NAME)'\n"

re: fclean all

default: $(NAME)

top:
	@printf "ottomata presents:\n"

bottom:
	@printf "$(NAME) finished.\n"
.PHONY: all clean fclean re top bottom
