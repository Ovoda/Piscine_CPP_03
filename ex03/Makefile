NAME	= game

CXX		= clang++
CXXFLAGS = -Wall -Wextra -Werror -Wshadow -Wno-shadow -std=c++98

RM		= rm -rf

SRCS_PATH	=	./
OBJS_PATH	=	objs/
INC			= -I./
SRCS		=	ClapTrap.cpp		\
				ScavTrap.cpp		\
				FragTrap.cpp		\
				DiamondTrap.cpp		\
				main.cpp			\

OBJS		= $(addprefix $(OBJS_PATH),$(SRCS:.cpp=.o))

$(OBJS_PATH)%.o: %.cpp
	@ mkdir -p $(OBJS_PATH)
	$(CXX) $(INC) $(CXXFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(OBJS) $(INC) -o $(NAME)

clean: 
	$(RM) $(OBJS) $(OBJS_PATH)

fclean: clean
	$(RM) $(NAME)

re: clean all

.PHONY: all clean fclean re