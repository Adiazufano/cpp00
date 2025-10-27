NAME=zombies
SRCS=main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
OBJS=$(SRCS:.cpp=.o)
G=g++
GFLAGS=-Wall -Werror -Wextra

all : $(NAME)

$(NAME) : $(OBJS)
	$(G) $(GFLAGS) -o $(NAME) $(OBJS)

%.o:%.cpp
		$(G) $(GFLAGS) -c $< -o $@

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re

