NAME=zombies
SRCS=main.cpp newZombie.cpp randomChump.cpp Zombie.cpp
OBJS=$(SRCS:.cpp=.o)
G=g++
GFLAGS=-Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) : $(OBJS)
		$(G) $(GFLAGS) -o $(NAME) $(OBJS)

%.o:%.cpp
	@$(G) $(GFLAGS) -c $< -o $@

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re