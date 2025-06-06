NAME=Mommy,_when_I_grow_up,_I_want_to_be_a_bureaucrat!
CXX=c++
DEPS=-MMD
DEBUG=-g -O0
CXXFLAGS=-Wall -Werror -Wextra -std=c++98 -Iincludes/ $(DEPS) $(DEBUG)
SRC=src/main.cpp \
	src/Bureaucrat.cpp

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
