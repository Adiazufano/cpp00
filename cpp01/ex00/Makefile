NAME=zombies
SRCS=main.cpp newZombie.cpp randomChump.cpp Zombie.cpp
OBJS=$(SRCS:.cpp=.o)
CXX=g++
CXXFLAGS=-Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) : $(OBJS)
		$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

%.o:%.cpp
	@$(CXX) $(CXXFLAGS) -c $< -o $@

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re