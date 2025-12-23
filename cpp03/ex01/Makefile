NAME=ScavTrap
SRCS=ClapTrap.cpp main.cpp ScavTrap.cpp
GFLAGS=-Wall -Werror -Wextra -std=c++98
G=g++
OBJS=$(SRCS:.cpp=.o)

all:$(NAME)

$(NAME):$(OBJS)
	$(G) $(GFLAGS) -o $(NAME) $(OBJS)

%.cpp:%.o
	$(G) $(GFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean:clean
	rm -rf $(NAME)

re:fclean all

.PHONY:all clean fclean re